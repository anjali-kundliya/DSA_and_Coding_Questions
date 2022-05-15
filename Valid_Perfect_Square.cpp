class Solution {
public:
    bool isPerfectSquare(int num) {
        int res;
        long long temp=num;
        long long mid;
        int s=1;
        int e=temp;
        while(s<=e){
         mid=s+(e-s)/2;
            if(mid*mid==temp)
                return true;
            else if(mid*mid<temp)
                s=mid+1;
            else
                e=mid-1;
        }
        return false;
    }
};
