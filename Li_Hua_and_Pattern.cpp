#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<vector<long long>> arr(n,vector<long long> (n));
        for(long long i=0; i<n; i++){
            for(long long j=0; j<n; j++){
                cin>>arr[i][j];
            }
        }
        int cnt=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(arr[i][j] != arr[n-i-1][n-j-1])
                cnt++;
            }
        }
        cnt=cnt/2;
        if(cnt>k){
            cout<<"NO"<<endl;
        }else{
            long long temp=k-cnt;
            if(temp%2==0){
                cout<<"YES"<<endl;

            }else{
                if(n%2==0){
                    cout<<"NO"<<endl;
                }else{
                    cout<<"YES"<<endl;
                }
            }
        }

    }
}