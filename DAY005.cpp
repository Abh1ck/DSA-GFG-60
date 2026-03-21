// Day 05
// Problem: Find H-Index
// Topic: Sorting
// Platform: GeeksforGeeks POTD
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 21/02/2025

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int hIndex(vector<int>& citations) {
        int ans = 0, n = citations.size();
        sort(citations.begin(), citations.end(), greater<int>());
        for(int i = 0; i < n; i++)
            if(citations[i] >= (i + 1)) ans = i + 1;
        return ans;
    }
};

int main() {
    // test your code here
    return 0;
}
