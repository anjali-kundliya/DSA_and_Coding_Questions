class Solution {
public:
    string encoder(string s){
        unordered_map<char,char>mapp;
        char fill ='a';
        for(auto x: s) if(!mapp[x]) mapp[x]=fill++;
        for(int i=0;i< s.size();i++) s[i] = mapp[s[i]];
        return s;
    }

    bool isIsomorphic(string s, string t) {
        return encoder(s)==encoder(t);
    }
};
