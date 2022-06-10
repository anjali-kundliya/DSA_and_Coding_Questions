class Solution {
    int index = 0;
    private String getRank(int score) {
        index++;
        if(index > 3) {
            return ""+ (index);
        }
        else {
            if(index == 1) {
                return "Gold Medal";
            } else if(index==2) {
                return "Silver Medal";
            } else {
                return "Bronze Medal";
            }
        }
    }

    public String[] findRelativeRanks(int[] score) {
        var queue = new PriorityQueue<Integer>((a,b)->b-a);
        var map = new HashMap<Integer, String>();
        for(var scr : score) {
            queue.add(scr);
        }

        while(!queue.isEmpty()) {
            var top = queue.remove();
            map.put(top,getRank(top));
        }

        var output = new String[score.length];
        var i=0;
        for(var scr : score) {
            output[i++] = map.get(scr);
        }

        return output;
    }
}
