class Solution {
public:
    int hammingWeight(uint32_t n){
        int ans=0;
        for(int i=0;i<=31;i++){
            if(n%2)ans++;n/=2;
        }
        return ans;
    }
};
