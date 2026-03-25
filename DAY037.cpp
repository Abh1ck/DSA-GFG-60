// Day 37
// Problem: Minimum Height Trees (Roots of MHT)
// Topic: Graphs / BFS / Topological Sorting
// Platform: GeeksforGeeks
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 25/03/2026

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> minHeightRoot(int V, vector<vector<int>>& edges) {
    
        if (V == 1)
        {
            return {0};
        }
        
        vector<int> adj[V+1];
        vector<int> degree(V, 0);
        
        // Build graph
        for (auto it : edges) {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
            degree[it[0]]++;
            degree[it[1]]++;
        }
        
        queue<int> q;
        
        // Push all leaf nodes
        for (int i = 0; i < V; i++) {
            if (degree[i] == 1) {
                q.push(i);
            }
        }
        
        int remaining = V;
        
        // Remove leaves layer by layer
        while (remaining > 2) {
            int sz = q.size();
            remaining -= sz;
            
            for (int i = 0; i < sz; i++) {
                int node = q.front();
                q.pop();
                
                for (int neigh : adj[node]) {
                    degree[neigh]--;
                    if (degree[neigh] == 1) {
                        q.push(neigh);
                    }
                }
            }
        }
        
        vector<int> ans;
        
        // Remaining nodes are MHT roots
        while (!q.empty()) {
            ans.push_back(q.front());
            q.pop();
        }
        
        return ans;
    }
};

int main() {
    // test your code here
    return 0;
}