class Solution {
public:
    int removePalindromeSub(string s) {
       string t=s;

        reverse(begin(t),end(t));

        if(t==s)return 1;

        return 2;
    }
};
