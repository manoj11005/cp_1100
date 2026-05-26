#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<long long> a(n);
        for(long long  i=0; i<n; i++){
            cin>>a[i];
        }
        // now calculate prefix sum
        vector<long long> prefix(n);
        long long  sum=0;
        for(long long i=0; i<n; i++){
            sum=sum+a[i];
            prefix[i]=sum;


        }
        long long  ans=0;
        for(long long  k=1; k<=n; k++){
            if(n%k){
                continue;
            }
            long long start=k-1;
            long long  res=0;
            long long maxi=prefix[start];
            long long  mini=prefix[start];
            for(long long idx=start+k; idx<n; idx=idx+k){
                long long curr=prefix[idx]-prefix[idx-k];
                maxi=max(maxi,curr);
                mini=min(mini,curr);
            }
            ans=max(ans,maxi-mini);
        }
        cout<<ans<<endl;
    }
}