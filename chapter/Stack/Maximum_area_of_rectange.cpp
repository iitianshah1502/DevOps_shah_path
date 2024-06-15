#include<bits/stdc++.h>
using namespace std;


class Solution {
private:
    vector<int> NSL(vector<int>& arr, int n) {
        int pseudoIndex = -1;
        vector<int> left;
        stack<pair<int, int>> s;
        for(int i = 0; i < n; i++) {
            if(s.empty()) {
                left.push_back(pseudoIndex);
            } else if(s.top().first < arr[i]) {
                left.push_back(s.top().second);
            } else {
                while(!s.empty() && s.top().first >= arr[i]) {
                    s.pop();
                }
                if(s.empty()) left.push_back(pseudoIndex);
                else left.push_back(s.top().second);
            }
            s.push({arr[i], i});
        }
        return left;
    }

    vector<int> NSR(vector<int>& arr, int n) {
        int pseudoIndex = n;
        vector<int> right;
        stack<pair<int, int>> s;
        for(int i = n-1; i >= 0; i--) {
            if(s.empty()) {
                right.push_back(pseudoIndex);
            } else if(s.top().first < arr[i]) {
                right.push_back(s.top().second);
            } else {
                while(!s.empty() && s.top().first >= arr[i]) {
                    s.pop();
                }
                if(s.empty()) right.push_back(pseudoIndex);
                else right.push_back(s.top().second);
            }
            s.push({arr[i], i});
        }
        reverse(right.begin(), right.end());
        return right;
    }

    int maxHistogramArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> left = NSL(heights, n);
        vector<int> right = NSR(heights, n);

        int maxArea = 0;
        for(int i = 0; i < n; i++) {
            int width = right[i] - left[i] - 1;
            int area = width * heights[i];
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }

public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty()) return 0;
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> v(m, 0);
        for(int i = 0; i < m; i++) {
            v[i] = matrix[0][i] - '0';
        }
        int mx = maxHistogramArea(v);
        for(int i = 1; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(matrix[i][j] == '0') v[j] = 0;
                else v[j] += matrix[i][j] - '0';
            }
            mx = max(mx, maxHistogramArea(v));
        }
        return mx;
    }
};
