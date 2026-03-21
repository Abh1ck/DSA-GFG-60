// Day 08
// Problem: Longest Span in two Binary Arrays
// Topic: Hashing
// Platform: GeeksforGeeks POTD
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 24/02/2025

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int equalSumSpan(vector<int> &x1, vector<int> &x2) {
        int n = x1.size();
        unordered_map<int, int> map;
        int ans = 0;
        map[0] = -1;
        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < n; i++) {
            sum1 += x1[i]; sum2 += x2[i];
            int diff = sum2 - sum1;
            if(map.find(diff) != map.end()) ans = max(ans, (i - map[diff]));
            else map[diff] = i;
        }
        return ans;
    }
};

int main() {
    // test your code here
    return 0;
}
