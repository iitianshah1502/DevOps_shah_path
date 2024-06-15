#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;

class Solution {
private:
    // dfs traversal function
    void dfs(int node, vector<int> adjLs[], vector<int> &vis) {
        vis[node] = 1;
        for (auto it : adjLs[node]) {
            if (!vis[it]) {
                dfs(it, adjLs, vis);
            }
        }
    }

public:
    int numProvinces(vector<vector<int>> adj, int V) {
        vector<int> adjLs[V];
        // to change adjacency matrix to list
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                // self node are not considered
                if (adj[i][j] == 1 && i != j) {
                    adjLs[i].push_back(j);
                    adjLs[j].push_back(i);
                }
            }
        }
        
        vector<int> vis(V, 0);
        int cnt = 0;
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                cnt++;
                dfs(i, adjLs, vis);
            }
        }
        return cnt;
    }
};

int main() {
    // input part
    int V, x;
    cin >> V;
    vvi adj;
    for (int i = 0; i < V; i++) {
        vector<int> temp;
        for (int j = 0; j < V; j++) {
            cin >> x;
            temp.push_back(x);
        }
        adj.push_back(temp);
    }
    
    // output part
    Solution ob;
    cout << ob.numProvinces(adj, V);
    return 0;
}
