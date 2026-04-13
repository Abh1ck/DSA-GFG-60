// Day 55
// Problem: Next Smallest Palindrome
// Topic: Arrays / Two Pointers / Math
// Platform: GeeksforGeeks
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 11/04/2026

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    bool all9s(vector<int>& num) {
        for (int d : num) {
            if (d != 9) return false;
        }
        return true;
    }
    
    vector<int> nextPalindrome(vector<int>& num) {
        
        int n = num.size();

        // Special case: all 9s
        if (all9s(num)) {
            vector<int> ans(n + 1, 0);
            ans[0] = ans[n] = 1;
            return ans;
        }
    
        vector<int> ans = num;
    
        int mid = n / 2;
        int i = mid - 1;
        int j = (n % 2) ? mid + 1 : mid;
    
        bool leftSmaller = false;
    
        // Check if left side is smaller
        while (i >= 0 && ans[i] == ans[j]) {
            i--;
            j++;
        }
    
        if (i < 0 || ans[i] < ans[j]) {
            leftSmaller = true;
        }
    
        // Mirror left to right
        while (i >= 0) {
            ans[j] = ans[i];
            i--;
            j++;
        }
    
        // Handle carry if needed
        if (leftSmaller) {
            int carry = 1;
            i = mid - 1;
    
            if (n % 2 == 1) {
                ans[mid] += carry;
                carry = ans[mid] / 10;
                ans[mid] %= 10;
                j = mid + 1;
            } else {
                j = mid;
            }
    
            while (i >= 0) {
                ans[i] += carry;
                carry = ans[i] / 10;
                ans[i] %= 10;
    
                ans[j] = ans[i];
                i--;
                j++;
            }
        }
    
        return ans;
    }
};

int main() {
    // test your code here
    return 0;
}