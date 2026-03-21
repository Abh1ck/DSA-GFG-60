// Day 23
// Problem: Sum of subarray minimums
// Topic: Stack
// Platform: GeeksforGeeks POTD
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 11/03/2025

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int sumSubMins(vector<int>& arr) {
        int n = arr.size();
        const int MOD = 1e9 + 7;
        stack<int> st, st2;
        vector<int> pse(n, -1);
        long long ans = 0;
        for(int i = 0; i < n; i++) {
            while(!st2.empty() && arr[st2.top()] > arr[i]) st2.pop();
            if(!st2.empty()) pse[i] = st2.top();
            st2.push(i);
        }
        for(int i = n-1; i >= 0; i--) {
            while(!st.empty() && arr[st.top()] >= arr[i]) st.pop();
            int nextSmaller = st.empty() ? n : st.top();
            ans = (ans + (long long)(i - pse[i]) * (nextSmaller - i) % MOD * arr[i]) % MOD;
            st.push(i);
        }
        return (int)ans;
    }
};

int main() {
    // test your code here
    return 0;
}
