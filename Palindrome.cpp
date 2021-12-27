// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    int temp=n;
            int reverse=0;
            while(temp>0) {
                int lastdigit =temp%10;
                reverse = reverse *10+lastdigit;
                temp =temp/10;
            }
            if(reverse ==n) {
                return ("Yes");
            }
            else{
                return ("No");
            }
        }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}
  // } Driver Code Ends
