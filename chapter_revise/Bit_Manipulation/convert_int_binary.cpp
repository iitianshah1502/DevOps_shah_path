#include<bits/stdc++.h>
using namespace std;
string convertIntBin(int n){
    string sr ="";
    while( n != 0){
        
        if(n%2==1) sr +='1';
        else sr +='0';
        n = n/2;

    }
    reverse(sr.begin(),sr.end());
    return sr;
}
int main(){
    int n;
    cin>>n;
    cout<<convertIntBin(n);
    return 0;
}