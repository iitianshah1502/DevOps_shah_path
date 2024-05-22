// problem we have a given n  worker and working days is 30 problem is find the commond days should 
// should be assign to perform maximum work
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; // no of worker
    cin>>n;
    vector<int>days(n); // this is a days vector that store list of days work by worker
    // this is the input part of the worker
    for(int i=0;i<n;++i){
        int num_workers;
        cin>>num_workers;
        for(int j=0;j<num_workers;++j){
            int day;
            cin>>day;
            days.push_back(day);
        }
    }
    // lets come to working pricple
    
}