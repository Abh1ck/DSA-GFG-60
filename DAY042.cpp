// Day 42
// Problem: Minimum Cost to Connect All Houses
// Topic: Graphs / MST / Prim’s Algorithm
// Platform: GeeksforGeeks
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 30/03/2026

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minCost(vector<vector<int>>& houses) {
        int n = houses.size();

        vector<int> minDist(n, INT_MAX);
        vector<bool> visited(n, false);

        minDist[0] = 0;
        int totalCost = 0;

        for (int i = 0; i < n; i++) {
            int u = -1;

            // Find the unvisited node with minimum distance
            for (int j = 0; j < n; j++) {
                if (!visited[j] && (u == -1 || minDist[j] < minDist[u])) {
                    u = j;
                }
            }

            // Add this node to MST
            visited[u] = true;
            totalCost += minDist[u];

            // Update distances of all unvisited nodes
            for (int v = 0; v < n; v++) {
                if (!visited[v]) {
                    int cost = abs(houses[u][0] - houses[v][0]) +
                               abs(houses[u][1] - houses[v][1]);

                    minDist[v] = min(minDist[v], cost);
                }
            }
        }

        return totalCost;
    }
};

int main() {
    // test your code here
    return 0;
}