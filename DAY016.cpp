// Day 16
// Problem: Max Xor Subarray of size K
// Topic: Sliding Window
// Platform: GeeksforGeeks POTD
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 04/03/2025

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        int n = arr.size(), ans = 0, xorr = 0;
        for(int i = 0; i < k - 1; i++) xorr ^= arr[i];
        for(int i = k - 1; i < n; i++) {
            xorr ^= arr[i];
            ans = max(ans, xorr);
            xorr ^= arr[i - k + 1];
        }
        return ans;
    }
};

int main() {
    // test your code here
    return 0;
}
