// Day 22
// Problem: Subarrays with First Element Minimum
// Topic: Stack
// Platform: GeeksforGeeks POTD
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 10/03/2025

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countSubarrays(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        int ans = 0;
        for(int i = n-1; i >= 0; i--) {
            while(!st.empty() && arr[st.top()] >= arr[i]) st.pop();
            int nextSmaller = st.empty() ? n : st.top();
            ans += (nextSmaller - i);
            st.push(i);
        }
        return ans;
    }
};

int main() {
    // test your code here
    return 0;
}
