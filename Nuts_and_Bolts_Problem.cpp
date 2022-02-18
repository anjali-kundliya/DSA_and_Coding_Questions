// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
public:

	void matchPairs(char nuts[], char bolts[], int n) {
	    // code here
	    char arr[]={'!','#','$','%','&','*','@','^','~'};
	    unordered_set<char>s;
	    for(int i=0;i<n;i++)
	    {
	        s.insert(nuts[i]);
	    }
	    int i=0,j=0;
	    while(i<9)
	    {
	        if(s.find(arr[i])!=s.end())
	        {
    	        nuts[j]=arr[i];
    	        j++;
    	        i++;
	        }
	        else
	        i++;
	    }
	    s.clear();
	    for(int i=0;i<n;i++)
	    {
	        s.insert(bolts[i]);
	    }
	     i=0,j=0;
	    while(i<9)
	    {
	        if(s.find(arr[i])!=s.end())
	        {
    	        bolts[j]=arr[i];
    	        j++;
    	        i++;
	        }
	        else
	        i++;
	    }
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char nuts[n], bolts[n];
        for (int i = 0; i < n; i++) {
            cin >> nuts[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> bolts[i];
        }
        Solution ob;
        ob.matchPairs(nuts, bolts, n);
        for (int i = 0; i < n; i++) {
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
