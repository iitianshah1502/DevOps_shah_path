#include<bits/stdc++.h>
using namespace std;
bool flag = false;
void solve(int ind,int s,int sum,vector<int>&ds, int arr[],int n)
{
    // base case 
    if(ind>=n)
    {
        if(s == sum && flag == false)
        {
            flag = true;
            for(auto it: ds) cout<<it<<" ";
            cout<<endl;
        }
        return ;
    }
    ds.push_back(arr[ind]);
    s +=arr[ind];
    solve(ind+1,s,sum,ds,arr,n);
    s -=arr[ind];
    ds.pop_back();
    solve(ind+1,s,sum,ds,arr,n);
}
int main()
{
    int arr[] = {1,2,1};
    int n = 3;
    int s = 0;
    int sum = 2;;
    vector<int>ds;
    solve(0,s,sum,ds,arr,n);
    return 0;
}