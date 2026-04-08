// Day 51
// Problem: Segregate 0s and 1s
// Topic: Two Pointers / Array
// Platform: GeeksforGeeks
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 07/04/2026

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        
        int n = arr.size();
        int i = 0;
        int j = n - 1;
        
        while(i < j)
        {
            while(i < n && arr[i] == 0)
            {
                i++;
            }
            
            while(j >= 0 && arr[j] == 1)
            {
                j--;
            }
            
            if(i < j)
            {
                swap(arr[i], arr[j]);
                i++;
                j--;
            }
        }
    }
};

int main() {
    // test your code here
    return 0;
}