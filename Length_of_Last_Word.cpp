class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0, last = s.length() - 1;
        while (last >= 0 && s[last] == ' ')
            last--;
        while (last >= 0 && s[last] != ' ') {
            len++;
            last--;
        }
        return len;
    }
};
