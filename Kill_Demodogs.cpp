#include<bits/stdc++.h>
using namespace std;
long long MOD=1e9+7;
int main(){
      freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        // 2022/6=337
        long long ans=((((n*(n+1))%MOD)*(4*n-1)%MOD)*337)%MOD;
        cout<<ans<<endl;



    }
}