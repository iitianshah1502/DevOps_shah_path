#include <bits/stdc++.h>
using namespace std;


signed main()
{
    
    int tc ;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string r = s;

        reverse(s.begin(), s.end());

        if (r <= s)
            cout << r << "\n";
        else
        {
            string new_string = "";
            new_string += s;
            new_string += r;

            cout << new_string << "\n";
        }
    }
}