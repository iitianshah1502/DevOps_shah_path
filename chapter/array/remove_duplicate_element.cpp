#include <bits/stdc++.h>
using namespace std;
// this is brute force approch
void discreateElement(int arr[], int n)
{
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    for (auto x : s)
    {
        cout << x << " ";
    }
}

// time complexity O(nlogn)
// space complexit O(n)
// optimal apporoch

int removeDuplicates(int nums[], int n)
{
    if (n <= 1)
    {
        return n;
    }
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (nums[j] != nums[i])
        {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}
// time complexity is O(n)
// space complexity is O(1)

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int len = removeDuplicates(arr,n);
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
