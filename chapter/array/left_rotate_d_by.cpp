#include<bits/stdc++.h>
using namespace std;
// brute force approach
void left_d_rotate(int arr[],int n,int d)
{
    int temp[d];
    for(int i =0;i<d;i++)
    {
        temp[i] = arr[i];
    }
    for(int i= d;i<n;i++)
    {
        arr[i-d] = arr[i];
    }
    for(int i=0;i<d;i++)
    {
        arr[n+i-d] = temp[i];
    }
}

// optimal apporch
void left_rotate_d(int arr[],int n , int d)
{
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);

}
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n,d;
    cin >> n>>d;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // left_d_rotate(arr,n,d);
    left_rotate_d(arr,n,d);
    printArray(arr,n);
    return 0;
}