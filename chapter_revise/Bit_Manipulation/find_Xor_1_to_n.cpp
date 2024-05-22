#include<bits/stdc++.h>
using namespace std;
// method 1 this is not optimised approach 
int Xor12N(int n){
    int ans = 0;
    for(int i=1;i<=n;i++){
        ans = ans^i;
    }
    return ans;
}
// method 2 this method you can remember becoz this method not come in mind]
int Xor1_2_N(int n){
    if(n%4==1) return 1;
    else if(n%4 == 2) return n+1;
    else if(n%4 == 3)  return 0;
    else return n;
}
// for range based question
int range_xor(int l,int r){
    return Xor1_2_N(l-1)^Xor1_2_N(r);
}
int main(){
// int n;
// cin>>n;
// cout<<Xor12N(n)<<endl;
// cout<<Xor1_2_N(n)<<endl;
int l,r;
cin>>l>>r;
cout<<range_xor(l,r);

return 0;
}