#include<iostream>
using namespace std;
int main() {
    //code
    int t,n,d,i;
    cin>>t;
    while(t--){
        cin>>n>>d;
        int arr[n], a[n], f=0;
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        for(i=0;i<n;i++){
            a[i]=arr[i];
        }
        d=n-d;
        d=d%n;
        for(i=0;i<n;i++){
            f=(i+d)%n;
            a[f]=arr[i];
        }
        for(i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
        return 0;
}
