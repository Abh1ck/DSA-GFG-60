// Day 34
// Problem: Rotten Oranges
// Topic: BFS / DFS
// Platform: GeeksforGeeks POTD
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 22/03/2026

#include <bits/stdc++.h>
using namespace std;

class Solution {
  private:
    void dfs(vector<vector<int>>& mat, vector<vector<int>>& time,
             int i, int j, int currentTime) {
        if (i < 0 || i >= mat.size() || j < 0 || j >= mat[0].size()
                || mat[i][j] == 0 || currentTime >= time[i][j]) return;
        time[i][j] = currentTime;
        dfs(mat, time, i - 1, j, currentTime + 1);
        dfs(mat, time, i + 1, j, currentTime + 1);
        dfs(mat, time, i, j - 1, currentTime + 1);
        dfs(mat, time, i, j + 1, currentTime + 1);
    }
  public:
    int orangesRot(vector<vector<int>>& mat) {
        if (mat.empty()) return -1;
        int rows = mat.size(), cols = mat[0].size();
        vector<vector<int>> time(rows, vector<int>(cols, INT_MAX));
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                if (mat[i][j] == 2)
                    dfs(mat, time, i, j, 0);
        int timeRequired = 0;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                if (mat[i][j] == 1) {
                    if (time[i][j] == INT_MAX) return -1;
                    timeRequired = max(timeRequired, time[i][j]);
                }
        return timeRequired;
    }
};

int main() {
    // test your code here
    return 0;
}