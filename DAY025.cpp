// Day 25
// Problem: Generate IP Addresses
// Topic: Backtracking
// Platform: GeeksforGeeks POTD
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 13/03/2025

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool valid(string &s) {
        if(s.size() > 1 && s[0] == '0') return false;
        int num = stoi(s);
        return num >= 0 && num <= 255;
    }
    vector<string> generateIp(string &s) {
        vector<string> ans;
        int n = s.size();
        if(n < 4 || n > 12) return ans;
        for(int l1=1; l1<=3; l1++) for(int l2=1; l2<=3; l2++) for(int l3=1; l3<=3; l3++) {
            int l4 = n - (l1+l2+l3);
            if(l4 < 1 || l4 > 3) continue;
            string A=s.substr(0,l1), B=s.substr(l1,l2), C=s.substr(l1+l2,l3), D=s.substr(l1+l2+l3,l4);
            if(valid(A) && valid(B) && valid(C) && valid(D))
                ans.push_back(A+"."+B+"."+C+"."+D);
        }
        return ans;
    }
};

int main() {
    // test your code here
    return 0;
}
