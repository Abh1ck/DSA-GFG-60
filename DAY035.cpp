// Day 35
// Problem: Longest Cycle in a Graph
// Topic: Graphs / DFS
// Platform: GeeksforGeeks POTD
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 23/03/2026

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int answer = -1;

    void dfs(int node, vector<int>& adj,
             unordered_map<int, int>& dist,
             unordered_map<int, bool>& visit) {
        visit[node] = true;
        int neighbor = adj[node];
        if (neighbor != -1 && !visit[neighbor]) {
            dist[neighbor] = dist[node] + 1;
            dfs(neighbor, adj, dist, visit);
        } else if (neighbor != -1 && dist.count(neighbor)) {
            answer = max(answer, dist[node] - dist[neighbor] + 1);
        }
    }

    int longestCycle(int V, vector<vector<int>>& edges) {
        vector<int> adj(V, -1);
        for (auto& e : edges)
            adj[e[0]] = e[1];

        unordered_map<int, bool> visit;
        for (int i = 0; i < V; i++) {
            if (!visit[i]) {
                unordered_map<int, int> dist;
                dist[i] = 1;
                dfs(i, adj, dist, visit);
            }
        }
        return answer;
    }
};

int main() {
    // test your code here
    return 0;
}