#include <bits/stdc++.h>
using namespace std;
// brute force approach
void left_ratate(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n - 1; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}
void printArray(int arr[],int n)
{
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    left_ratate(arr,n);
    printArray(arr,n);
    return 0;
}