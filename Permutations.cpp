class Solution {
    int n;
public:
      void get(int index, vector<int>& nums, vector<vector<int>>& ans) {
        if (index == n) {
            ans.push_back(nums);
            return; }
        for (int i = index; i < n; i++) {
            swap(nums[index], nums[i]);
            get(index+1, nums, ans);
            swap(nums[index], nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        n = nums.size();
        vector<vector<int>> ans;
        get(0, nums, ans);
        return ans;
    }
};
