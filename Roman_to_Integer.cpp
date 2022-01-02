class Solution {
public:
    int romanToInt(string s) {
        int ret = 0;        // to store the return value
        int temp = 0;       // to store the previous value

        for (size_t i = 0; i < s.size(); i++) {
            char curr = s[i];
            int pos = 0;     // to store the current value

            switch(curr) {
                case 'I': pos = 1; break;
                case 'V': pos = 5; break;
                case 'X': pos = 10; break;
                case 'L': pos = 50; break;
                case 'C': pos = 100; break;
                case 'D': pos = 500; break;
                case 'M': pos = 1000; break;
                default: return 0;
            }

            ret += pos;
            if (temp < pos)
                ret -= temp*2;     // ex: IV, ret = 1 + 5 - 1*2 = 4
            temp = pos;
        }

        return ret;
    }
};
