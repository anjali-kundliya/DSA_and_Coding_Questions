class Solution {
public:
    int firstUniqChar(string s) {
       int arr[26];
        memset(arr,0,sizeof(arr));
        int ind[26];
        memset(arr,0,sizeof(arr));
        for(int i=0;i<s.size();i++){
            arr[s[i]-97] += 1;
            ind[s[i]-97] = i;
        }
        vector<pair<int,char>> v;
        for(int i=0;i<26;i++){
            if(arr[i]==1)
                v.push_back({ind[i],char(97+i)});
        }
        sort(v.begin(),v.end());
        if(v.size()==0)
        	return -1;
        return v[0].first;
    }
};
