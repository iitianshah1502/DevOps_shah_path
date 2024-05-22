#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &x :v) cin>>x;
    int Xor = 0;
    for(int i=0;i<n;i++){
        Xor = Xor^v[i];
    }
    cout<<Xor<<endl;
}