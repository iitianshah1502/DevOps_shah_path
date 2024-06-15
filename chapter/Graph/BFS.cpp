#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> bfsOfGraph(int v, vector<int> adj[])
    {
        vector<int> vis(v, 0); // Initialize the visited array with 0
        vector<int> bfs;       // To store the BFS traversal
        queue<int> q;          // Using a queue for BFS

        vis[0] = 1; // Mark the first node as visited
        q.push(0);  // Push the initial node to the queue

        while(!q.empty())
        {
            int node = q.front(); // Get the front element in the queue
            q.pop();              // Remove it from the queue
            bfs.push_back(node);  // Add it to the BFS result

            // Visit all the adjacent nodes
            for(auto it : adj[node])
            {
                if(!vis[it])
                {
                    vis[it] = 1; // Mark the node as visited
                    q.push(it);  // Push it to the queue
                }
            }
        }
        return bfs; // Return the BFS traversal
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
    vector<int>ans  = obj.bfsOfGraph(V,adj);
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    return 0;

}