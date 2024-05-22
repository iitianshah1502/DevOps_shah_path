#include<bits/stdc++.h>
using namespace std;
int main(){
    int t =1 ;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(auto &i : a) cin>>i;
        sort(a.begin(),a.end());
        int i = (n+1)/2-1;/// for zero base inex median formula changed
        int j = i;
        while(j<n&& a[i]==a[j]) j++;
        cout<<j-i<<endl;
    }
    return 0;
}