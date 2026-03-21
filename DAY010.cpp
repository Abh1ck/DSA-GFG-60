// Day 10
// Problem: Isomorphic Strings
// Topic: Hashing
// Platform: GeeksforGeeks POTD
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 26/02/2025

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool areIsomorphic(string s, string t) {
        unordered_map<char, char> mp1, mp2;
        int m = s.length();
        for(int i = 0; i < m; i++) {
            char ch1 = s[i], ch2 = t[i];
            if(mp1.find(ch1) != mp1.end() && mp1[ch1] != ch2 ||
               mp2.find(ch2) != mp2.end() && mp2[ch2] != ch1)
                return false;
            mp1[ch1] = ch2; mp2[ch2] = ch1;
        }
        return true;
    }
};

int main() {
    // test your code here
    return 0;
}
