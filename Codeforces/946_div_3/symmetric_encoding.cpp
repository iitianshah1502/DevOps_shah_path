#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string str;
    cin >> n;
    cin >> str;

    vector<char> v(str.begin(), str.end());
    sort(v.begin(), v.end());
    // for distinct function
    v.resize(unique(v.begin(), v.end()) - v.begin());

    int m = v.size();
    // for replacing the word
    for (int i = 0; i < n; i++)
    {
        int index = lower_bound(v.begin(), v.end(), str[i]) - v.begin();
        str[i] = v[m - 1 - index];
    }

    cout << str << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
