#include<bits/stdc++.h>
using namespace std;
void sum(int i,int currentsum){
    // base case 
    if(i<1){
        cout<<currentsum<<endl;
        return;
    }
    sum(i-1,currentsum+i);
}
int main(){
    sum(5,0);
    return 0;
}