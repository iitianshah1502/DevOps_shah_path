#include<bits/stdc++.h>
using namespace std;
int main(){
    auto solve =[&] (){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int ones  = 0;
        for(char ch: str) {
            if(ch=='1') ones++;
        }
        if(ones==2 && str.find("11")!=string::npos){
            cout<<"NO"<<endl;
            return;
        }
        if(ones &1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    };
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}