class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& p, string s) {
        vector<vector<string>> res(s.size());
        sort(p.begin(), p.end());

        int x, y;
        x=0, y=p.size()-1;

        for(int i=0; i<s.size(); i++)
        {
            while(x<=y and p[x][i]!=s[i]) x++;
            while(x<=y and p[y][i]!=s[i]) y--;

            int j=x;
            while(j<x+3)
            {
                if(j>y)
                    break;
                res[i].push_back(p[j]);
                j++;
            }

        }
        return res;
    }
};
