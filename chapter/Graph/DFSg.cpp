#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    void DFS(int node, vector<int> adj[], vector<int> &vis, vector<int> &ls) // Pass vis by reference
    {
        vis[node] = 1;
        ls.push_back(node);
        // Traverse all its adjacent nodes
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                DFS(it, adj, vis, ls);
            }
        }
    }

public:
    vector<int> dfsOfGraph(int V, vector<int> adj[])
    {
        vector<int> vis(V, 0);
        int start_node = 0;
        vector<int> ls;
        DFS(start_node, adj, vis, ls);
        return ls;
    }
};
int main()
{
    // for input
    int V,E;
    cin>>V>>E;
    vector<int>adj[V+1];
    for(int i =0;i<E;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    Solution obj;
    vector<int>ans  = obj.dfsOfGraph(V,adj);
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    return 0;

}