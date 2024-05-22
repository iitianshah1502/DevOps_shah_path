#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>m; // first is value and second is freq
        for(int i=0;i<n;i++){
            int x; cin>>x;
            m[x]++;
        }
        vector<int>c;
        for(auto i: m) if(i.second == 1) c.push_back(i.first);
        sort(c.begin(),c.end());
        if(c.size()>=2){
            m[c[1]]=0;
        }

        int mex = 0;
        while(m[mex]>0){
            mex++;  
            
        }
        cout<<mex<<endl;
    }
    return 0;
}