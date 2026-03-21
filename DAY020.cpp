// Day 20
// Problem: Pythagorean Triplet
// Topic: Hashing
// Platform: GeeksforGeeks POTD
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 08/03/2025

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        unordered_set<int> sq;
        int n = arr.size();
        for(int i = 0; i < n; i++) sq.insert(arr[i] * arr[i]);
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++)
                if(sq.count(arr[i]*arr[i] + arr[j]*arr[j])) return true;
        }
        return false;
    }
};

int main() {
    // test your code here
    return 0;
}
