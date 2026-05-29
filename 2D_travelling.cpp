#include<bits/stdc++.h>
using namespace std;
int main(){
     freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        int n,k,a,b;
        cin>>n>>k>>a>>b;
        vector<long long> x(n+1),y(n+1);
        for(int i=1; i<=n; i++){
            
            cin>> x[i] >> y[i];
        }
        long long ans=abs(x[a]-x[b])+abs(y[a]-y[b]);

        long long mina=1e17;
        long long minb=1e17;
        for(int i=1; i<=k; i++){
            mina=min(mina,abs(x[a]-x[i])+abs(y[a]-y[i]));
            minb=min(minb,abs(x[i]-x[b])+abs(y[i]-y[b]));

        }
        ans=min(ans,mina+minb);
        cout<<ans<<endl;
    }
}