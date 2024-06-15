#include <queue>
#include <vector>
using namespace std;
long long minCost(long long arr[], long long n) {
    // Create a minimum heap (priority queue)
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    
    // Push all elements of the array into the heap
    for(long long i = 0; i < n; ++i) {
        pq.push(arr[i]);
    }
    
    long long tcost = 0;
    
    // While there are at least two elements in the heap
    while(pq.size() >= 2) {
        // Extract the two smallest elements
        long long fir = pq.top();
        pq.pop();
        long long sec = pq.top();
        pq.pop();
        
        // Sum these elements
        long long sum = fir + sec;
        
        // Add the sum to the total cost
        tcost += sum;
        
        // Push the sum back into the heap
        pq.push(sum);
    }
    
    // Return the total cost
    return tcost;
}
