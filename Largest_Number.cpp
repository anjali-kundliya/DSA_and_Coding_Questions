class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> arr;
        for(int i = 0 ; i<nums.size() ; i++)
            arr.push_back(to_string(nums[i]));
            sort(arr.begin() , arr.end() , cmp);
            string ans = "";

        for(int i = 0 ; i<arr.size() ; i++){
            ans+=arr[i];
        }
        int i = 0 ;
        while(ans[i]=='0'){
            i++;
        }

        if(i==ans.size())
            ans="0";
        return ans;
    }

     static bool cmp(string a , string b){
        return a+b>b+a;
    }
};
