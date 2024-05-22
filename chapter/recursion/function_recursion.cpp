#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    // base case
    if(n==0) return 0;
    else return n+sum(n-1);
}
int main(){
    cout<<sum(5);
    return 0;
}