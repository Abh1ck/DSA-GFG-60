
// Day 40
// Problem: Articulation Points
// Topic: Graphs / DFS / Tarjan’s Algorithm
// Platform: GeeksforGeeks
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 28/03/2026

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    void dfs(int u, int parent, vector<int> adj[], vector<int>& disc,
             vector<int>& low, vector<bool>& vis, vector<bool>& isArticulation,
             int &timer) {
        
        vis[u] = true;
        timer++;
        disc[u] = timer;
        low[u] = timer;
        
        int children = 0;
        
        for (int v : adj[u]) {
            
            if (!vis[v]) {
                children++;
                dfs(v, u, adj, disc, low, vis, isArticulation, timer);
                
                low[u] = min(low[u], low[v]);
                
                if (parent != -1 && low[v] >= disc[u]) {
                    isArticulation[u] = true;
                }
            }
            else if (v != parent) {
                low[u] = min(low[u], disc[v]);
            }
        }
        
        if (parent == -1 && children > 1) {
            isArticulation[u] = true;
        }
    }
  
    vector<int> articulationPoints(int V, vector<vector<int>>& edges) {
        
        vector<int> adj[V];
        
        // Build graph
        for (auto it : edges) {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        
        vector<int> disc(V, -1);
        vector<int> low(V, -1);
        vector<bool> vis(V, false);
        vector<bool> isArticulation(V, false);
        
        int timer = 0;
        
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                dfs(i, -1, adj, disc, low, vis, isArticulation, timer);
            }
        }
        
        vector<int> ans;
        
        for (int i = 0; i < V; i++) {
            if (isArticulation[i]) {
                ans.push_back(i);
            }
        }
        
        if (ans.empty()) {
            return {-1};
        }
        
        return ans;
    }
};

int main() {
    // test your code here
    return 0;
}
