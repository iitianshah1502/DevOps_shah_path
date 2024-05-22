#include<bits/stdc++.h>
using namespace std;
// this approch is memorization top-down approach
int fibo(int n, vector<int>& dp) {
    if (n <= 1) return n; // Base case for Fibonacci sequence
    if (dp[n] != -1) return dp[n]; // Return memoized result if it exists
    // Compute Fibonacci value and store in dp array
    return dp[n] = fibo(n - 1, dp) + fibo(n - 2, dp);
}
// method 2 is bottom-up approch

// int main() {
//     int n;
//     cin >> n;
//     // vector<int> dp(n + 1, -1); // Initialize dp array with -1
//     // cout << fibo(n, dp); // Call fibo and print the result
//     return 0;
// }
// TC = o(n)
// SC = o(n)
// tabulation method
int32_t main(){
    int n;
    cin>>n;
    int prev2 = 0;
    int prev =1;
    int cur = 0;
    for(int i =2;i<=n;i++){
         cur = prev2+prev;
        prev2 = prev;
        prev = cur;
    }
    cout<<prev;
    return 0;

}