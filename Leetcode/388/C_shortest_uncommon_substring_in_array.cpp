#include <bits/stdc++.h>
using namespace std;
vector<string> shortestSubstrings(vector<string> &arr)
{
    int n = arr.size();
    map<string,int> total;
    vector< map<string,int> > strings(n); // this is list of map in vector for
    // beacaue vector is a linear data structure
    vector<string>ans(n); // this ans vector store oupput why n because it store exact size of array
    for(int i=0;i<n;i++)
    {
        string str = arr[i];
        int m = str.length();
        for(int j=0;j<m;j++)
        {
            string s="";
            for(int k=j;k<m;k++)
            {
                s += str[k];
                total[s]++;
                strings[i][s]++;
            }
        }
    }
    // now come to the logic
    for(int i=0;i<n;i++)
    {
        for(auto [str,cnt]: strings[i])
        {
            if(total.at(str) == cnt)
            {
                if(ans[i].length()==0 || ans[i].length()>str.length()) ans[i] = str;
                else if(ans[i].length()==str.length() && ans[i]> str) ans[i] = str;
            }
        }
    }
    return ans;
}
