// Day 60
// Problem: Check if String can be Rearranged to Form Palindrome
// Topic: Strings / Hashing
// Platform: GeeksforGeeks
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 17/04/2026

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool canFormPalindrome(string &s) {
        
        vector<int> freq(26, 0);
        
        // Count frequency of each character
        for(char ch : s) {
            freq[ch - 'a']++;
        }
        
        int odd = 0;
        
        // Count characters with odd frequency
        for(auto it : freq) {
            if(it % 2 != 0) {
                odd++;
            }
            
            if(odd > 1) {
                return false;
            }
        }
        
        return true;
    }
};

int main() {
    // test your code here
    return 0;
}