// Day 11
// Problem: Number of submatrix have sum X
// Topic: Matrix
// Platform: GeeksforGeeks POTD
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 27/02/2025

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countSubmatrices(vector<vector<int>>& mat, int x) {
        int m = mat.size(), n = mat[0].size(), cnt = 0;
        for(int r1 = 0; r1 < m; r1++) {
            vector<int> col(n, 0);
            for(int r2 = r1; r2 < m; r2++) {
                for(int c = 0; c < n; c++) col[c] += mat[r2][c];
                unordered_map<int, int> mp;
                mp[0] = 1;
                int sum = 0;
                for(int c = 0; c < n; c++) {
                    sum += col[c];
                    if(mp.count(sum - x)) cnt += mp[sum - x];
                    mp[sum]++;
                }
            }
        }
        return cnt;
    }
};

int main() {
    // test your code here
    return 0;
}
