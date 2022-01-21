class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> countMap;

        for(int i=0;i<nums.size();i++){
            if(countMap[nums[i]]){
                return true;
            }
            countMap[nums[i]]++;
        }
        return false;
    }
};
