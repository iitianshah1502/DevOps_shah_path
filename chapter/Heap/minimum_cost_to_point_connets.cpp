#include<bits/stdc++.h>
using namespace std;
using  vi = vector<int>;
using vvi = vector<vi>;
int MinCostPoints(vvi &points)
{
    int n = points.size();
    // mimimum heap
    priority_queue<int,vi,greater<int>>pq;
    for(int i=0;i<n;i++)
    {
        pq.push((abs(points[i][0]-points[i+1][0])+abs(points[i][1]-points[i+1][1])));
    }
     int tcost = 0;
    while(pq.size()>=2)
    {
        int fir = pq.top();
        pq.pop();
        int sec = pq.top();
        pq.top();
        tcost  = tcost+fir+sec;
        pq.push(fir+sec);
    }
    return tcost;
}
