#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=2*i;j<=n;j +=i){
            a[i] = max(a[i],a[j]);
        }
    }
    sort(a.begin()+1,a.end());
    const int M = 998244353;
    long long ans =0;
    long long p = 1;
    for(int i=1;i<=n;i++){
        ans = (ans+p*a[i])%M;
        p = p*2%M;
    }
    cout<<ans<<endl;
    return 0;
}