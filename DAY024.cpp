// Day 24
// Problem: Minimum K Consecutive Bit Flips
// Topic: Greedy
// Platform: GeeksforGeeks POTD
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 12/03/2025

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int kBitFlips(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> prefix(n+2, 0);
        int count = 0;
        for(int i = 0; i <= n-k; i++) {
            if(i > 0) prefix[i] += prefix[i-1];
            if(arr[i] == 0 && prefix[i]%2 == 0) { prefix[i]++; prefix[i+k]--; count++; }
            if(arr[i] == 1 && prefix[i]%2 == 1) { prefix[i]++; prefix[i+k]--; count++; }
        }
        for(int i = n-k+1; i < n; i++) {
            prefix[i] += prefix[i-1];
            if(arr[i] == 0 && prefix[i]%2 == 0) return -1;
            if(arr[i] == 1 && prefix[i]%2 == 1) return -1;
        }
        return count;
    }
};

int main() {
    // test your code here
    return 0;
}
