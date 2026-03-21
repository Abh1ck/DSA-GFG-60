// Day 15
// Problem: Longest subarray with Atmost two distinct integers
// Topic: Sliding Window
// Platform: GeeksforGeeks POTD
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 03/03/2025

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int totalElements(vector<int> &arr) {
        map<int, int> mp;
        int j = 0, ans = 0;
        for(int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;
            while(mp.size() > 2) {
                mp[arr[j]]--;
                if(mp[arr[j]] == 0) mp.erase(arr[j]);
                j++;
            }
            ans = max(ans, i - j + 1);
        }
        return ans;
    }
};

int main() {
    // test your code here
    return 0;
}
