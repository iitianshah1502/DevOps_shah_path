#include<bits/stdc++.h>
using namespace std;
// approch 1
int maximumLengthSubstring(string s) {
    int res = 0;
    for(int i=0;i<s.size();i++){
        vector<int>freq(26,0);
        for(int j=i;j<s.size();j++){
            freq[s[j]-'a']++;
            bool bad = 0;
            for(int i: freq) if(i>2) bad = 1;
            if(!bad) res =max(res,j-i+1);
        }
    }    
    return res;
}
int main(){
    string s;
    cin>>s;
    cout<<maximumLengthSubstring(s)<<endl;
    return 0;
}