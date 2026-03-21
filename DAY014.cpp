// Day 14
// Problem: Trapping Rain Water
// Topic: Two Pointer
// Platform: GeeksforGeeks POTD
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 02/03/2025

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int totalWater = 0, lmax = 0, rmax = 0;
        int i = 0, j = arr.size() - 1;
        while(i < j) {
            lmax = max(lmax, arr[i]); rmax = max(rmax, arr[j]);
            if(arr[i] <= arr[j]) { totalWater += lmax - arr[i]; i++; }
            else { totalWater += rmax - arr[j]; j--; }
        }
        return totalWater;
    }
};

int main() {
    // test your code here
    return 0;
}
