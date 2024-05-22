#include<bits/stdc++.h>
using namespace std;
void fun(string s1,string s2){
    // find the position of string s2
    int found = s1.find(s2);
    // check if the position is -1 or not
    if(found != string::npos){
        cout<<"first "<<s2<<" found at :"<<(found)<<endl;
    }
    else
    {
        cout<<s2<<" is not in "<<"the string"<<endl;
    }
}
int main(){
     // Given strings
    string s1 = "shahmohammad";
    string s2 = "mm";
    string s3 = "no";
 
    // Function Call
    fun(s1, s2);
 
    return 0;
}