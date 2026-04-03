// Day 46
// Problem: Diagonal Traversal of Matrix
// Topic: Matrix / Hashing / Traversal
// Platform: GeeksforGeeks
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 03/04/2026

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> diagView(vector<vector<int>> mat) {
        
        int n = mat.size();
        map<int, vector<int>> mp;
        
        // Traverse matrix and group by diagonals
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                mp[i + j].push_back(mat[i][j]);
            }
        }
        
        vector<int> ans;
        
        // Collect elements in diagonal order
        for(auto it : mp)
        {
            for(auto val : it.second)
            {
                ans.push_back(val);
            }
        }
        
        return ans;
    }
};

int main() {
    // test your code here
    return 0;
}