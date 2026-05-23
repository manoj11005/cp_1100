#include <bits/stdc++.h>
using namespace std;
int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];

        }
        int ans=0;
        int i=n-1;
        while(i>=0 && v[i]==v[n-1]){
            i--;
        }
        if(i==-1){
            cout<<0<<endl;
        
        }
        int len = n - 1 - i; 

        while(len < n){
            ans++;
            len *= 2;
        }
        cout<<ans<<endl;
    }

}