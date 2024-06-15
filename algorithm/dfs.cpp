// dfs -- depth first search
// for tree
// in tree we can avoid visited aray but in graph it is necessary to include visited array
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
using vi = vector<int>;
using vvi = vector<int>;
#define pb push_back
vector<int>g[N];
bool vis[N];
void dfs(int vertex)
{
    // 1. take action on the vertex after entering the vertex
    vis[vertex] = true;
    for (int child : g[vertex])
    {
        // 2.take action on the child before entering the child node
        if (!vis[child]){
        dfs(child);
        }
        // 3. take action on the child node after extion the child node/vertex
    }
    // 4. take action on the vertex before exiting the vertex
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].pb(v2);
        g[v2].pb(v1);
    }
    return 0;
}