#include<bits/stdc++.h>
using namespace std;
// function that count bit
int countSetBit(int n){
    int count = 0;
    while(n>0){
        count++;
        n &=n-1;
    }
    return count;
}
// function that count flipped number
int flipedCount(int a, int b){
    return countSetBit(a^b);

}

int main(){
    int a = 10;
    int b = 20;
    cout<<flipedCount(a,b);
    return 0;
}
