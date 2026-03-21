// Day 13
// Problem: Move All Zeroes to End
// Topic: Arrays
// Platform: GeeksforGeeks POTD
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 01/03/2025

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int j = 0;
        for(int i = 0; i < arr.size(); i++)
            if(arr[i] != 0) { arr[j] = arr[i]; j++; }
        for(; j < arr.size(); j++) arr[j] = 0;
    }
};

int main() {
    // test your code here
    return 0;
}
