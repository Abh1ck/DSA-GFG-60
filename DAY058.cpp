// Day 58
// Problem: URLify (Replace Spaces with %20)
// Topic: Strings / Traversal
// Platform: GeeksforGeeks
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 14/04/2026

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string URLify(string &s) {
        
        string result = "";
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                result += "%20";
            } else {
                result += s[i];
            }
        }
        
        return result;
    }
};

int main() {
    // test your code here
    return 0;
}