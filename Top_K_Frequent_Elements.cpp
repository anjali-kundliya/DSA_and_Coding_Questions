class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
    unordered_map<int,int>::iterator it=m.begin();
    priority_queue<pair<int,int>>pq;
        for(;it!=m.end();it++){
            pq.push(make_pair(it->second,it->first));
        }
        vector<int>ans;
        int a=0;
        while(a<k){
            ans.push_back(pq.top().second);
            pq.pop();
            a++;
        }
        return ans;
    }
};
