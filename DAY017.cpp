// Day 17
// Problem: Longest Substring with K Uniques
// Topic: Sliding Window
// Platform: GeeksforGeeks POTD
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 05/03/2025

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        vector<int> freq(26, 0);
        int unique = 0, maxi = -1;
        for(int i = 0, j = 0; j < s.size(); j++) {
            freq[s[j] - 'a']++;
            if(freq[s[j] - 'a'] == 1) unique++;
            while(unique > k) {
                freq[s[i] - 'a']--;
                if(freq[s[i] - 'a'] == 0) unique--;
                i++;
            }
            if(unique == k) maxi = max(maxi, j - i + 1);
        }
        return maxi;
    }
};

int main() {
    // test your code here
    return 0;
}
