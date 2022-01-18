class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count=0;
        for(int i=0;i<flowerbed.size();i++){
            if (flowerbed[i]==0){
                int prev=((i==0||flowerbed[i-1]==0)?0:1);
                int next=((i==flowerbed.size()-1||flowerbed[i+1]==0)?0:1);

                if(prev==0 && next==0){
                    count++;
                    flowerbed[i]=1;
                }
            }
            if(count>=n)
                return true;
        }
        return false;
    }
};
