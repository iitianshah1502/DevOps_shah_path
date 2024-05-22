#include<bits/stdc++.h>
using namespace std;
bool Sorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) { // Loop until n-2
        if (arr[i] > arr[i + 1]) {
            return false; // If any element is greater than the next, array is not sorted
        }
    }
    return true; // If no violation found, array is sorted
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<Sorted(arr,n)<<endl;
    return 0;
}