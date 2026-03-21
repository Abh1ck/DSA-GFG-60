// Day 09
// Problem: Longest Subarray with Majority Greater than K
// Topic: Sliding Window
// Platform: GeeksforGeeks POTD
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 25/02/2025

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k) {
        unordered_map<int, int> mp;
        mp[0] = -1;
        int prefixsum = 0, maxlen = 0;
        for(int i = 0; i < arr.size(); i++) {
            prefixsum += (arr[i] > k) ? 1 : -1;
            if(prefixsum > 0) maxlen = i + 1;
            if(mp.count(prefixsum - 1)) maxlen = max(maxlen, i - mp[prefixsum - 1]);
            if(!mp.count(prefixsum)) mp[prefixsum] = i;
        }
        return maxlen;
    }
};

int main() {
    // test your code here
    return 0;
}
