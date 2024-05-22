#include<bits/stdc++.h>
using namespace std;
bool pallindorme(int i,string s){
    // base case
 if(i>=s.size()) return true;
 if(s[i]!=s[s.size()-i-1]) return false;
    return pallindorme(i+1,s);
}
int  main(){
    string s;
    cin>>s;
    cout<<pallindorme(0,s);
    return 0;
}
