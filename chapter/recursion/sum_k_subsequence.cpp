#include<bits/stdc++.h>
using namespace std;
void printS(int ind,int s,int sum,vector<int>&ds,int arr[],int n)
{
    // base case
    if(ind>=n)
    {
        if(s==sum)
        {
            for(auto it: ds)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return ;
    }
    // take
    ds.push_back(arr[ind]);
    s += arr[ind];
    printS(ind+1,s,sum,ds,arr,n);
    s -=arr[ind];
    ds.pop_back();
    
    printS(ind+1,s,sum,ds,arr,n);
}
int main()
{
    int arr[] = {1,2,1};
    int n = 3;
    int s = 0;
    int sum = 2;;
    vector<int>ds;
    printS(0,s,sum,ds,arr,n);
    return 0;
}