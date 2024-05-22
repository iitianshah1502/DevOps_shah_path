#include<bits/stdc++.h>
using namespace std;
int convertBin2Int(string s){
    int n = s.length();
     int ans = 0;
     int p2 =1;
    for(int i=n-1;i>=0;i--){
       
        if(s[i]=='1') ans +=p2;
        // else ans += 0*pow(2,i);
        p2 = p2*2;
        
    }
    return ans;

}
int main(){
    string s;
    cin>>s;
    cout<<convertBin2Int(s)<<endl;
    return 0;
}