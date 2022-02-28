class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int start=0, end = s.size()-1; start<end; start++, end--)
            swap(s[start], s[end]);
    }
};
