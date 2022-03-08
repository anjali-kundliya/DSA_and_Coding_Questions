class Solution {
    void combination(vector<int>& candidates, int target, vector<int> currComb, int currSum, int currIndex, vector<vector<int>>& ans){
        if(currSum>target) return;
        if(currSum==target){
            ans.push_back(currComb);
            return;
        }

        for(int i=currIndex; i<candidates.size(); i++){
            currComb.push_back(candidates[i]);
            currSum+=candidates[i];
            combination(candidates, target, currComb, currSum, i, ans);
            currComb.pop_back();
            currSum-=candidates[i];
        }

    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> currComb;
        combination(candidates, target, currComb, 0, 0, ans);
        return ans;
    }
};
