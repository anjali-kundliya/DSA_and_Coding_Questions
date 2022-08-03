class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int p = 0;
        vector<string> ans;

        for(int i=1; i<=n && p<target.size(); i++) {

            if(i == target[p]) ans.push_back("Push"), p++;
            else ans.push_back("Push"), ans.push_back("Pop");
        }

        return ans;
    }
};
