class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int maxScore = INT_MIN;
        int l = 0, r = 0, sum = 0;
        unordered_map<int, int> map;
        while(r < nums.size())
        {
            map[nums[r]]++;
            sum += nums[r];
            while(map[nums[r]] > 1 and l < r)
            {
                map[nums[l]]--;
                sum -= nums[l];
                l++;
            }
            maxScore = max(maxScore, sum);
            r++;
        }
        return maxScore;
    }
};
