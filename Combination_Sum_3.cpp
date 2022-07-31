class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        for (int i = 0; i < (1 << 9); i++) {
            vector<int> combo;
            int bits = __builtin_popcount(i);
            if (bits != k) continue;

            int temp = 0;
            for (int j = 0; j < 9; j++) {
                if (i & (1 << j)) {
                    temp += (j + 1);
                    combo.push_back(j + 1);
                }
            }

            if (temp == n)
                ans.push_back(combo);
        }

        return ans;
    }
};
