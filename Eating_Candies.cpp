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
        for(int i=0; i<n; i++){
            cin>>arr[i];

        }
        int i=0;
        int j=n-1;
        long long lsum=0;
        long long rsum=0;
        long long cnt=0;
        while(i<=j){
            if(lsum<=rsum){
                lsum=lsum+arr[i];
                i++;

            }else{
                rsum=rsum+arr[j];
                j--;
            }
            if(lsum==rsum){
                cnt=i+(n-1-j);
            }

        }
        cout<<cnt<<endl;
    }
}