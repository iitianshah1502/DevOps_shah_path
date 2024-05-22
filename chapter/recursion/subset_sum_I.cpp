#include<bits/stdc++.h>
using namespace std;
class Solution
{
    private:
    void Subsum(int ind,int sum,vector<int>&arr,int n,vector<int>&Sumsubset)
    {
        if(ind>=n)
        {
            Sumsubset.push_back(sum);
            return ;
        }
        // 
        Subsum(ind+1,sum+arr[ind],arr,n,Sumsubset);
        // do not pick the element
        Subsum(ind+1,sum,arr,n,Sumsubset);
    }
    public:
     vector<int> subsetSums(vector<int> arr, int n) {
        vector<int>Sumsubset;
        Subsum(0,0,arr,n,Sumsubset);
    }
};
