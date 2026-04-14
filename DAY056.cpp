// Day 56
// Problem: Remove Spaces from String
// Topic: Strings / Basic Traversal
// Platform: GeeksforGeeks
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 12/04/2026

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string removeSpaces(string& s) {
        
        string ans = "";
        
        for (int i = 0; i < s.size(); i++){
            if (s[i] != ' '){
                ans += s[i];
            }
        }
        
        return ans;
    }
};

int main() {
    // test your code here
    return 0;
}