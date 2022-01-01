// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long int> result;
        stack<long long int> values;
        values.push(arr[n-1]);
        result.push_back(-1);
        int i=n-2;
        while(i>=0){
           if(values.empty()){
               values.push(arr[i--]);
               result.push_back(-1);
           }
           if(arr[i]<values.top()){
               result.push_back(values.top());
               values.push(arr[i--]);
           }else{
               values.pop();
           }
       }
       reverse(result.begin(),result.end());
       return result;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];

        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends
