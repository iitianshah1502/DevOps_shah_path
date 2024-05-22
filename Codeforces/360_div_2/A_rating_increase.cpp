#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string ab;
        cin>>ab;
        int n = ab.size();
        bool found = false; // to track if any valid split is found
        for(int i=1;i<n;i++){ // start from 1 to avoid splitting at index 0
            string a = ab.substr(0,i);
            string b = ab.substr(i,n-i);
            int num_a = stoi(a);
            int num_b = stoi(b);
            if(a[0]!='0' && b[0]!='0' && num_a<num_b && a+b==ab){
                cout<<a<<" "<<b<<endl;
                found = true; // set found to true if a valid split is found
                break; // exit loop once a valid split is found
            }
        }
        if (!found) // print -1 if no valid split is found
            cout<<-1<<endl;
    }
    return 0;
}
