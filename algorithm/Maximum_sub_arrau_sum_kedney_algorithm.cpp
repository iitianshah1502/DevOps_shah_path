#include <bits/stdc++.h>
using namespace std;
// bruet force approach -- 1

int subarraySum(vector<int> &a)
{
    int n = a.size();
    int maximum_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += a[j];
            maximum_sum = max(sum, maximum_sum);
        }
    }
    return maximum_sum;
}

// for optimal solution we use kadane's algorithm
// this is a optimal approach
long long maxisubarraySum(vector<int> &a)
{
    int n = a.size();
    long long sum = 0;
    long long maxi = LONG_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum > maxi){
            maxi = sum;
        }
        if (sum < 0){
            sum = 0;
        }
    }

    return maxi;
}
int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << subarraySum(a) << endl;
    cout<<"2nd optimal approach"<<endl;
    cout<<maxisubarraySum(a)<<endl;
}