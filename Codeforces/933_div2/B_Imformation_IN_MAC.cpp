#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n),prefix(n),suffix(n);
        for(auto &i : arr) cin>>i;
        set<int>preMex,sufMex;
        int a=0,b=0;
        // this snipet is for store a prefix
        for(int i=0;i<n;i++){
            preMex.insert(arr[i]);
            while(preMex.count(a)) a++;  // this code run until when a is not reach
            prefix[i] = a;
        }
        for(int i = n-1;i>=0;i--){
            sufMex.insert(arr[i]);
            while(sufMex.count(b)) b++;
            suffix[i] = b;
        }
        vector<pair<int,int> >answer;
        // n-1 because we are going to iteraate one ahead
        for(int i=0;i<n-1;i++){
            if(prefix[i]==suffix[i+1]){
                answer.push_back({1,i+1});
                answer.push_back({i+2,n});
                break;
            }
        }
        if(!answer.size()) cout<<-1<<endl;
        else{
            cout<<2<<endl;
            for(auto &i : answer) cout<<i.first<<" "<<i.second<<endl;
        }
    }
    return 0;
}