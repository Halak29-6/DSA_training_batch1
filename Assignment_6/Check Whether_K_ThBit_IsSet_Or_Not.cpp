#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool checkKthBit(int n, int k) {
        int bit = n>>k;
        return (bit & 1);
        // return (1 & (n>>k));
    }
};