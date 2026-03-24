// Day 36
// Problem: Course Schedule I
// Topic: Graphs / DFS / Cycle Detection
// Platform: GeeksforGeeks
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 24/03/2026

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    void solve(int i, int curr, vector<int> graph[], vector<int>& vis, bool &ans)
    {
        vis[i] = curr;
        for(int it : graph[i])
        {
            if(vis[it] != -1)
            {
                if(vis[it] == curr)
                {
                    ans = false;
                }
            }
            else
            {
                solve(it, curr, graph, vis, ans);
            }
        }
        vis[i] = -2;
    }
  
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<int> adj[n];
        
        for(auto it : prerequisites)
        {
            adj[it[0]].push_back(it[1]);
        }
        
        bool ans = true;
        vector<int> vis(n, -1);
        
        for(int i = 0; i < n; i++)
        {
            if(vis[i] == -1)
            {
                solve(i, i, adj, vis, ans);
            }
        }
        
        return ans;
    }
};

int main() {
    // test your code here
    return 0;
}