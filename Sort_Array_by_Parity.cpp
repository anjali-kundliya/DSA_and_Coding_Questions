class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int lastOddIndex = -1;
        for(int i = 0; i < n ; i++){

            if(nums[i]%2==0 and lastOddIndex!=-1){
                swap(nums[lastOddIndex], nums[i]);
                lastOddIndex++;
            }

            if(nums[i]%2!=0 and lastOddIndex==-1){
                lastOddIndex = i;
            }
        }
        return nums;
    }
};
