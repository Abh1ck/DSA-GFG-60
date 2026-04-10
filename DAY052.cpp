// Day 52
// Problem: Intersection of Two Arrays
// Topic: Hashing / Set
// Platform: GeeksforGeeks
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 08/04/2026

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set<int> seen(nums1.begin(), nums1.end());
        vector<int> res;

        for (int n : nums2) {
            if (seen.count(n)) {
                res.push_back(n);
                seen.erase(n);
            }
        }

        return res;
    }
};

int main() {
    // test your code here
    return 0;
}