#include<bits/stdc++.h>
using namespace std;
// using loop solving fibonacci
int fibnacci(int n){
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    int ans = 0;
    for(int i=2;i<n;i++)
    {
        fib[i] = fib[i-1]+fib[i-2];
        ans = fib[i];
    }
    return ans;
}
// using recusion
int fibo(int n)
{
    // base condition
    if(n<=1) return n;
    int last = fibo(n-1);
    int s_last = fibo(n-2);
    return last+s_last;
}
int main(){
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
    return 0;
}