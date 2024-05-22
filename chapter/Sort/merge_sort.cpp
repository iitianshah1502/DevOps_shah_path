#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr,int low,int mid,int high)
{
    vector<int>temp; // temprory array
    int left = low;
    int right = mid+1;
    // sorting the element in the sorted array
    while(left<=mid && right<= high)
    {
        if(arr[left]<=arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    // if the element in the left halve are still left
    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    // if the element in the right halve are still left
    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    // trasforming all the element from temprory to arr
    for(int i=low;i<=high;i++){
        arr[i] = temp[i-low];
    }

}
// another fucntion to merge the sorting alogrithm
void mergeSort(vector<int>&arr,int low , int high)
{
    // base case 
    if(low>=high) return ;
    int mid = low+(high-low)/2;
    mergeSort(arr,low,mid); // left half
    mergeSort(arr,mid+1,high); // right halves
    merge(arr,low,mid,high); // meging sorted halves
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    mergeSort(v,0,n-1);
    for(auto it: v)
    {
        cout<<it<<" ";
    }
    return 0;
}