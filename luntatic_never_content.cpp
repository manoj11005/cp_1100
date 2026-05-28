#include<bits/stdc++.h>
using namespace std;
int main(){
     freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int ans =0;
        for(int i=0; i<n; i++){
            ans=__gcd(ans,abs(arr[i]-arr[n-i-1]));
        }
        cout<<ans<<endl;

    }
}