#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int setKthBit(int n, int k) {
        return n|(1<<k);
    }
};
