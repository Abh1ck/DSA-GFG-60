// Day 47
// Problem: Gray Code
// Topic: Bit Manipulation / Pattern Generation
// Platform: GeeksforGeeks
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 03/04/2026

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> graycode(int n) {
        
        int iterationLimit = pow(2, n - 1);
        
        vector<int> sequence;
        sequence.reserve(iterationLimit * 2);

        bool doSwap = false;
        int item = 0;

        // Generate Gray code sequence
        for (int i = 0; i < iterationLimit; i++) {
            int db = item * 2;

            if (doSwap) {
                sequence.push_back(db + 1);
                sequence.push_back(db);
            } else {
                sequence.push_back(db);
                sequence.push_back(db + 1);
            }

            doSwap = !doSwap;
            item = sequence[i + 1];
        }

        vector<string> result;

        // Convert numbers to binary strings
        for (int num : sequence) {
            string bin = "";
            for (int i = n - 1; i >= 0; i--) {
                if (num & (1 << i)) bin += '1';
                else bin += '0';
            }
            result.push_back(bin);
        }

        return result;
    }
};

int main() {
    // test your code here
    return 0;
}