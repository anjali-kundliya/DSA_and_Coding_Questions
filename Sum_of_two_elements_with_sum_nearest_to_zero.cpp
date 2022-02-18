// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
            // your code here
            if(n == 1)
            return arr[0];
            sort(arr, arr+n);
            int l = 0;
            int r = n-1;
            int Max = INT_MAX;
            while(l < r){
                int sum = arr[l] + arr[r];
                if(abs(Max) > abs(sum)){
                    Max = sum;
              }
                else if(abs(Max) == abs(sum)){
                    Max = max(Max,sum);
              }
              if(sum < 0)
              l++;
              else
              r--;
           }
           return Max;
       }
};

// { Driver Code Starts.
int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    }
}  // } Driver Code Ends
