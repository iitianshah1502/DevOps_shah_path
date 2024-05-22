#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n>>i;
    // if((n&(1<<i))!=0) cout<<"true";
    // else cout<<"false";
    // using right shift  operator
    if(((n>>i)&1)!=0) cout<<true;
    else cout<<false;
    return 0;
}