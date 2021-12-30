#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    string reverseWords (string s)
    {
        //code here.
       stack<int> stk;
       string ans="";
       for(int i=0;i<s.size();i++){
           string a="";
           for(int j=i;s[j]!='.' and j<s.size();j++){
               a+=s[j];
               i++;
           }
           reverse(a.begin(),a.end());
           ans+=a;
           if(i!=s.size()){
               ans+='.';
           }

       }
       return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends
