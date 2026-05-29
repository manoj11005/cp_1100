#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> arr(n);
        for(long long i=0; i<n; i++){
            cin>>arr[i];
        }
        long long tsum=accumulate(arr.begin(),arr.end(),0LL);
        long long ans=0;
        long long sum=0;
        for(int i=0; i<n-1; i++){
            sum=sum+arr[i];
            ans=max(ans,__gcd(sum,tsum-sum));
        }
        cout<<ans<<endl;


    }
}