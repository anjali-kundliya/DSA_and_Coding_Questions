// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    int countZeroes(int arr[], int n) {
        // code here
        int c=0;
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]==0)
            c++;
            else
            break;
        }
           return c;
       }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countZeroes(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

  // } Driver Code Ends
