class Solution {
    int [] dir = new int[]{0,1,0,-1,0};
    public int minimumEffortPath(int[][] heights) {
        int m = heights.length;
        int n = heights[0].length;

        int [][] efforts = new int[m][n];
        for(int [] effort : efforts){
            Arrays.fill(effort,Integer.MAX_VALUE);
        }
        efforts[0][0] = 0;
        PriorityQueue<int[]> pq = new PriorityQueue<int[]>( (a,b) -> (a[0]-b[0]));

        pq.offer(new int[]{0,0,0});

        while(!pq.isEmpty()){
            int [] top = pq.poll();
            int x = top[1];
            int y = top[2];
            int currEff = top[0];

            if(x==m-1 && y==n-1){
                return currEff;
            }

            for(int k=0;k<4;k++){
                int newX = x + dir[k];
                int newY = y + dir[k+1];

                if(newX>=0 && newX<m && newY>=0 && newY<n){
                    int newEffort = Math.max(currEff, Math.abs(heights[newX][newY] - heights[x][y]));

                    if(newEffort < efforts[newX][newY]){
                        efforts[newX][newY] = newEffort;
                        pq.offer(new int[]{newEffort, newX,newY});
                    }
                }
            }
        }
        return 0;
    }
}
