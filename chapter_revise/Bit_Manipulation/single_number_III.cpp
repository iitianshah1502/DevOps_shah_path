#include<bits/stdc++.h>
using namespace std;

vector<int> singleNumber(vector<int>& nums) {
    int n = nums.size();
    int Xor = 0;
    for(int i = 0; i < n; i++) {
        Xor = Xor ^ nums[i];
    }
    int rightMost = Xor & ((Xor)&(Xor-1)^Xor);
    int b1 = 0, b2 = 0;
    for(int i = 0; i < n; i++) {
        if(nums[i] & rightMost) 
            b1 = b1 ^ nums[i];
        else 
            b2 = b2 ^ nums[i];
    }
    return {b1, b2};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    vector<int> result = singleNumber(v);
    for(int x : result)
        cout << x << " ";
    cout << endl;
    return 0;
}
