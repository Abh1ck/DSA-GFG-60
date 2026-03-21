// Day 33
// Problem: Number of BST From Array
// Topic: BST
// Platform: GeeksforGeeks POTD
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 21/03/2025

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
class Solution {
  public:
    ll modpow(ll a, ll b, ll mmod) {
        ll ans = 1;
        while(b > 0) {
            if(b%2==1) ans=(ans%mmod*a%mmod)%mmod;
            b=b/2; a=((a%mmod)*(a%mmod))%mmod;
        }
        return ans;
    }
    ll catalan(int x, vector<ll>& fact) {
        ll ans = fact[2*x];
        ans=((ans%mod)*modpow(fact[x+1],mod-2,mod)%mod)%mod;
        ans=((ans%mod)*modpow(fact[x],mod-2,mod)%mod)%mod;
        return ans;
    }
    vector<int> countBSTs(vector<int>& arr) {
        int n = arr.size();
        map<int,int> mp;
        for(int i=0;i<n;i++) mp[arr[i]]=i;
        vector<int> sorted=arr;
        sort(sorted.begin(),sorted.end());
        vector<ll> fact(2*n+1,1);
        for(ll i=1;i<=2*n;i++) fact[i]=((i%mod)*(fact[i-1]%mod))%mod;
        vector<int> ans(n);
        for(int i=0;i<n;i++) {
            ll val=(catalan(i,fact)%mod*catalan(n-i-1,fact)%mod)%mod;
            ans[mp[sorted[i]]]=val;
        }
        return ans;
    }
};

int main() {
    // test your code here
    return 0;
}
