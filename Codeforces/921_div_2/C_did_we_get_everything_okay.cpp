#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,m;
        cin>>n>>k>>m;
        string str;
        cin>>str;
        set<char>st;
        string ans ="";
        // this is a first function for chekcing euality of k 
        for(int i=0;i<m;i++){
            st.insert(str[i]);
            if(st.size()==k){
                ans.push_back(str[i]);
                st.clear();
            }
        }
        if(ans.length()>=n) cout<<"YES"<<endl;
        // 2nd function for no and print that character
        else{
            cout<<"NO"<<endl; // if only this is part then problem is simple but here he want to print also tht sring
            char missing;
            for(int j=0;j<k;j++){ // loop only iterate at k because i want to pring only k length of missing string
            char ch = char('a'+j);
            if(st.count(ch)==0) {missing = ch;}
            }
            while(ans.length()<n) ans.push_back(missing);
            cout<<ans<<endl;

        }
    }
    return 0;
}