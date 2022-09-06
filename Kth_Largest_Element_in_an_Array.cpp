class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int j = 0; j < n; j++)
        {
            pq.push(nums[j]);
            if(pq.size() > k)
            {
                pq.pop();
            }
        }
        return pq.top();
    }
};
