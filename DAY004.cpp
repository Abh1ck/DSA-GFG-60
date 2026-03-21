// Day 04
// Problem: Form the Largest Number
// Topic: Sorting
// Platform: GeeksforGeeks POTD
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 20/02/2025

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    static bool cmp(string &a, string &b) { return a + b > b + a; }
    string findLargest(vector<int> &arr) {
        vector<string> nums;
        for(auto x : arr) nums.push_back(to_string(x));
        sort(nums.begin(), nums.end(), cmp);
        if(nums[0] == "0") return "0";
        string result = "";
        for(string &s : nums) result += s;
        return result;
    }
};

int main() {
    // test your code here
    return 0;
}
