 #include<bits/stdc++.h>
 using namespace std;
 int minOperations(int k) {
     if(k==1) return 0;
     int ans = k;
     for(int i=1;i<=k/2;i++){
        int t = ceil(k*1.0/i*1.0 - 1)+i-1;
        ans = min(ans,t);
     }
     return ans ;
    }
    int main(){
        int k;
        cin>>k;
        cout<<minOperations(k)<<endl;
    }