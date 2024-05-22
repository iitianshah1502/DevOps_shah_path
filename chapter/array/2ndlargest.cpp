#include<bits/stdc++.h>
using namespace std;
// this is a brute force approach
int firstlargest(int arr[],int n)
{
    int largest = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
    }
    return largest ;
}
int secondLargest(int arr[],int n)
{
    // we are going to assume that there is no negative intezer
    int Slargest = -1;
    int Flargest = firstlargest(arr,n);
    for(int i = 0;i<n;i++){
        if(arr[i]>Slargest && Flargest != arr[i])
        {
            Slargest = arr[i];
        }
    }
    return Slargest;

}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<secondLargest(arr,n)<<endl;
    return 0;
}