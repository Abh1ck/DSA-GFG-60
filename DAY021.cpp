// Day 21
// Problem: Largest number in one swap
// Topic: Greedy
// Platform: GeeksforGeeks POTD
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 09/03/2025

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string largestSwap(string &s) {
        int n = s.size(), mx = n-1, left = -1, right = -1;
        for(int i = n-2; i >= 0; i--) {
            if(s[i] > s[mx]) mx = i;
            else if(s[i] < s[mx]) { left = i; right = mx; }
        }
        if(left != -1) swap(s[left], s[right]);
        return s;
    }
};

int main() {
    // test your code here
    return 0;
}
