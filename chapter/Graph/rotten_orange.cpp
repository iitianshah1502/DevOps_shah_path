#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
using pi = pair<int, int>;
class Solution
{
public:
    int orangesRotting(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        int vis[n][m];
        int cntfresh =0;
        queue<pair<pi,int>>q;
        // traversal technique
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
              if(grid[i][j]==2)
              {
                q.push({{i,j},0});
              }  
              else 
              {
                vis[i][j] = 0;
              }
              if(vis[i][j] == 1) cntfresh++;
            }
        }
        // bfs technique to identify which is roated or not
        int tm = 0;
        int drow[] ={-1,0,+1,0};
        int dcol[] ={0,1,0,-1};
        int cnt = 0;
        while(!q.empty())
        {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            q.pop();
            tm = max(tm,t);
            for(int i=0;i<4;i++)
            {
                int nrow = r+drow[i];
                int ncol = c+drow[i];
                if(nrow>=0 && nrow<n && ncol>=0 && nrow <m && grid[nrow][ncol]==2 && vis[nrow][ncol]==0)
                {
                    q.push({{nrow,ncol},t+1});
                    cnt++;
                }
            }
        }
        if(cnt != cntfresh) return -1;
        return tm;
    }
};
