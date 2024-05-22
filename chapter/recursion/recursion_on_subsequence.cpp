#include<bits/stdc++.h>
using namespace std;
void printF(int ind,vector<int>&ds,int arr[],int n)
{
    // base case
    if(ind>=n)
    {
        for(auto it : ds)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    // take or pick at particular index
    ds.push_back(arr[ind]);
    printF(ind+1,ds,arr,n);
    ds.pop_back();
    printF(ind+1,ds,arr,n); // not take
    
}
int main()
{
    int arr[] ={1,2,2};
    int n = 3;
    vector<int>ds;
    printF(0,ds,arr,n);
    return 0;

}