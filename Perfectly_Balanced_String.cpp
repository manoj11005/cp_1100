#include<bits/stdc++.h>
using namespace std;
int main(){
     freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        map<char,int> mpp;
        int n=s.length();
        int i;
        for( i=0; i<n; i++){
            if(mpp.find(s[i]) == mpp.end()){
                mpp[s[i]]++;

            }else{
                break;
            }
        }
        bool ok=true;
        for(int j=i; j<n; j++){
            if(s[j] != s[j-i]){
                ok=false;
            }

        }
        if(ok){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
}