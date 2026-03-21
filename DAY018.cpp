// Day 18
// Problem: Smallest window containing all characters
// Topic: Sliding Window
// Platform: GeeksforGeeks POTD
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 06/03/2025

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string minWindow(string s, string p) {
        if(p.length() > s.length()) return "";
        int n = s.length(), m = p.length();
        int start = -1, len = INT_MAX, c = 0, c2 = 0, j = 0;
        vector<int> forS(26, 0), forP(26, 0);
        for(int i = 0; i < m; i++) { forP[p[i]-'a']++; if(forP[p[i]-'a']==1) c++; }
        for(int i = 0; i < n; i++) {
            forS[s[i]-'a']++;
            if(forS[s[i]-'a'] == forP[s[i]-'a']) c2++;
            if(c2 == c) {
                while(forS[s[j]-'a'] > forP[s[j]-'a']) { forS[s[j]-'a']--; j++; }
                if(len > i - j + 1) { start = j; len = i - j + 1; }
            }
        }
        if(start == -1) return "";
        return s.substr(start, len);
    }
};

int main() {
    // test your code here
    return 0;
}
