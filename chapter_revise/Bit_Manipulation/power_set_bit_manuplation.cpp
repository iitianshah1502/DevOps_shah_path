#include<bits/stdc++.h>
using namespace std;
// function that print all power set 
void printPowerSet(char * set,int set_size ){
    unsigned int pow_set_size = 1<<set_size;
    for(int i =0;i<pow_set_size;i++){
        for(int j=0;j<set_size;j++){
            if((i&(1<<j))) cout<<set[j];
        }
        cout<<endl;
    }
}
int main(){
    char set[]= {'a','b','c'};
    printPowerSet(set,3);
    return 0;
}