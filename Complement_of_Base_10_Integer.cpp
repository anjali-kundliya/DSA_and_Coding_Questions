class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)
            return 1;
        int result=0;
        int i=0;

        while(n>0){
            if((n%2)==0){
                result= result | (1<<i);
            }
            n>>=1;
            i++;
        }
        return result;
    }
};
