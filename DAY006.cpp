// Day 06
// Problem: Count Subarrays with given XOR
// Topic: Hashing
// Platform: GeeksforGeeks POTD
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 22/02/2025

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int subarrayXor(vector<int> &a, int k) {
        int xr = 0;
        map<int, int> mpp;
        mpp[xr] = 1;
        int cnt = 0;
        for(int i = 0; i < a.size(); i++) {
            xr = xr ^ a[i];
            int x = xr ^ k;
            if(mpp.find(x) != mpp.end()) cnt += mpp[x];
            mpp[xr]++;
        }
        return cnt;
    }
};

int main() {
    // test your code here
    return 0;
}
