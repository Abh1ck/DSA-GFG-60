// Day 07
// Problem: Union of Arrays with Duplicates
// Topic: Hashing
// Platform: GeeksforGeeks POTD
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 23/02/2025

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        unordered_set<int> st;
        for(int x : a) st.insert(x);
        for(int x : b) st.insert(x);
        vector<int> result(st.begin(), st.end());
        return result;
    }
};

int main() {
    // test your code here
    return 0;
}
