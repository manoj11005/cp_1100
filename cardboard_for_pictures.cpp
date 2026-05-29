#include<bits/stdc++.h>
using namespace std;
int main(){
     freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){

        long long  n,c;
        cin>>n>>c;
        vector<long long> arr(n);
        for(long long  i=0; i<n; i++){
            cin>>arr[i];
        }
        // now apply binary search for searching w'\;
        long long l=1;
        long long r=1e9;
        long long ans=-1;
        while(l<=r){
            long long mid=l+(r-l)/2;
            long long allsum=0;
            for(int i=0; i<n; i++){
                allsum=allsum+(arr[i]+2*mid)*(arr[i]+2*mid);
                if(allsum>c){
                    break;
                }
            }
            if(allsum<=c){
                ans=mid;
                l=mid+1;

            }else{
                r=mid-1;
            }


        }
        cout<<ans<<endl;


    }
}