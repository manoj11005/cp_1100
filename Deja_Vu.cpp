#include<bits/stdc++.h>
using namespace std;
int main(){
     freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin>>t;
    while(t--){
        long long n,q;
        cin>>n>>q;
        vector<long long> a(n);
        vector<long long> x(q);
        for(long long i=0; i<n; i++){
            cin>>a[i];

        }
        for(long long i=0; i<q; i++){
            cin>>x[i];
        }
        long long prev=31;
        for(long long i=0; i<q; i++){
            if(x[i]>=prev) continue;
            long long val=pow(2,x[i]);
            for(long long j=0; j<n; j++){
                if(a[j]%val==0){
                    a[j]=a[j]+(val/2);
                }
            }
            prev=x[i];
        }
        for(long long i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;


    }
}