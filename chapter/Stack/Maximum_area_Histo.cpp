#include<bits/stdc++.h>
using namespace std;

vector<int> NSL(vector<int>& arr, int n) {
    int pseudoIndex = -1;
    vector<int> left;
    stack<pair<int, int>> s;
    for(int i = 0; i < n; i++) {
        if(s.empty()) {
            left.push_back(pseudoIndex);
        } else if(s.size() > 0 && s.top().first < arr[i]) {
            left.push_back(s.top().second);
        } else if(s.size() > 0 && s.top().first >= arr[i]) {
            while(s.size() > 0 && s.top().first >= arr[i]) {
                s.pop();
            }
            if(s.size() == 0) left.push_back(pseudoIndex);
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
        } else if(s.size() > 0 && s.top().first < arr[i]) {
            right.push_back(s.top().second);
        } else if(s.size() > 0 && s.top().first >= arr[i]) {
            while(s.size() > 0 && s.top().first >= arr[i]) {
                s.pop();
            }
            if(s.size() == 0) right.push_back(pseudoIndex);
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

int main() {
    vector<int> hist = {6, 2, 5, 4, 5, 1, 6};
    int maxArea = maxHistogramArea(hist);
    cout << "Maximum area of histogram is: " << maxArea << endl;
    return 0;
}

 