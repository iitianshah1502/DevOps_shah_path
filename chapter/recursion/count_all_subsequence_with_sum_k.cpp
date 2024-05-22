#include<bits/stdc++.h>
using namespace std;
// bool flag = false;
int solve(int ind,int s,int sum, int arr[],int n)
{
    // base case 
    if(ind>=n)
    {
        if(s == sum)
        {
            // for(auto it: ds) cout<<it<<" ";
            // cout<<endl;
            return 1;
        }
        // condition does not satisfied
        else return 0;
    }
    // ds.push_back(arr[ind]);
    s +=arr[ind];
    int l= solve(ind+1,s,sum,arr,n);
    s -=arr[ind];
    // ds.pop_back();
    int r = solve(ind+1,s,sum,arr,n);
    return l+r;
}
int main()
{
    int arr[] = {1,2,1};
    int n = 3;
    int s = 0;
    int sum = 2;;
    // vector<int>ds;
   cout<< solve(0,s,sum,arr,n);
    return 0;
}