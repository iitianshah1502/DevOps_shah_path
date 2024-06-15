#include <bits/stdc++.h>
using namespace std;
using pi = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;

vvi KClosestPoint(vvi &points, int k) {
    int n = points.size();
    // max priority queue
    priority_queue<pair<int, pi>> pq; // int stores the distance and pi stores the points
    for (int i = 0; i < n; i++) {
        int dist = points[i][0] * points[i][0] + points[i][1] * points[i][1];
        pq.push({dist, {points[i][0], points[i][1]}});
        if (pq.size() > k) pq.pop();
    }
    
    vvi result;
    while (!pq.empty()) {
        pi p = pq.top().second;
        pq.pop();
        result.push_back({p.first, p.second});
    }
    
    return result;
}
