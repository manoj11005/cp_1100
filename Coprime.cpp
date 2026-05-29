#include<bits/stdc++.h>
using namespace std;
vector<int> pairs[1001];
void solve(){
    int n;
    cin>>n;
    vector<int> idx(1001,0);
    for(int i=1; i<=n; i++){
        int x;
        cin>>x;
        idx[x]=i;
        // we store all the idexes of the elements 
        // of the array and removing duplicasy with storing
        // rightmost index because we want maximum i+j;

    }
    int ans=-1;
    for(int i=1; i<=1000; i++){
        if(idx[i]==0){
            continue;
        }
        for(int j:pairs[i]){
            if(idx[j] != 0){
                ans=max(ans,idx[i]+idx[j]);
            }
        }
    }
    cout<<ans<<endl;
}
int main(){
     freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);


    // as we know integers only 1 to 1000 are possible
    // now precompute till 1000 all coprime
    for(int i=1; i<=1000 ; i++){
        for(int j=1; j<=1000; j++){
            if(__gcd(i,j)==1){
                pairs[i].push_back(j);
            }
        }
    }
    // O(1000*1000*log(1000))
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}