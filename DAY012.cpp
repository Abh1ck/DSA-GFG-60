// Day 12
// Problem: Find the closest pair from two arrays
// Topic: Two Pointer
// Platform: GeeksforGeeks POTD
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 28/02/2025

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> closestPair(vector<int>& arr1, vector<int>& arr2, int x) {
        int i = 0, j = arr2.size() - 1;
        int diff = INT_MAX;
        vector<int> ans(2);
        while(i < (int)arr1.size() && j >= 0) {
            int s = arr1[i] + arr2[j];
            if(abs(s - x) < diff) { diff = abs(s - x); ans[0] = arr1[i]; ans[1] = arr2[j]; }
            if(s < x) i++;
            else j--;
        }
        return ans;
    }
};

int main() {
    // test your code here
    return 0;
}
