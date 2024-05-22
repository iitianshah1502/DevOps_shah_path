#include<bits/stdc++.h>
using namespace std;
int main(){
    auto solve = [&] ()
    {
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if((a[0]+a[1]+a[2])%2) cout<<-1<<endl;
        else if(a[0]+a[1]<a[2]) cout<<a[0]+a[1]<<endl;
        else
        cout<<(a[0]+a[1]+a[2])/2<<endl;
    };
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
