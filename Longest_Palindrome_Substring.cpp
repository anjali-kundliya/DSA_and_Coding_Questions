class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        bool hash = true;
        string str = "";
        int index = 0;
        for (int i = 0; i < (2 * n) + 1; i++) {
            if (hash) {
                str.push_back('#');
                hash = false;
            }
            else {
                str.push_back(s[index]);
                index++;
                hash = true;
            }
        }
        int m = str.length();
        int maxLen = 0, first = 0, last = 0;
        for (int i = 0; i < m; i++) {
            int count = 0;
            int start = i - 1;
            int end = i + 1;
            while (start >= 0 && end < m) {
                if (str[start] == str[end]) {
                    count++;
                    start--;
                    end++;
                }
                else {
                    if (count > maxLen) {
                        maxLen = count;
                        first = ++start;
                        last = --end;
                    }
                    break;
                }
            }
            if (count > maxLen) {
                maxLen = count;
                first = ++start;
                last = --end;
            }
        }
        string res = "";
        for (int i = first; i <= last; i++) {
            if (str[i] != '#')
                res.push_back(str[i]);
        }
        return res;
    }
};
