// Day 03
// Problem: Missing Element in Range
// Topic: Arrays
// Platform: GeeksforGeeks POTD
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 19/02/2025

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> missinRange(vector<int>& arr, int low, int high) {
        vector<int> ans;
        set<int> s;
        for(int i = 0; i < arr.size(); i++) s.insert(arr[i]);
        for(int i = low; i <= high; i++)
            if(s.find(i) == s.end()) ans.push_back(i);
        return ans;
    }
};

int main() {
    // test your code here
    return 0;
}
