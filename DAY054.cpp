// Day 54
// Problem: Toeplitz Matrix
// Topic: Matrix / Hashing
// Platform: GeeksforGeeks
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 10/04/2026

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isToeplitz(vector<vector<int>>& mat) {
        
        map<int, set<int>> mp;
        int n = mat.size();
        int m = mat[0].size();
        
        // Group elements by diagonals (i - j)
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                mp[i - j].insert(mat[i][j]);
                
                if(mp[i - j].size() > 1)
                {
                    return false;
                }
            }
        }
        
        return true;
    }
};

int main() {
    // test your code here
    return 0;
}