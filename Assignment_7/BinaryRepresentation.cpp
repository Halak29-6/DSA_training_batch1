#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string getBinaryRep(int n) {
        string res = "";

        for(int i = 31; i >= 0; i--) {
            if(n & (1 << i)) {
                res += '1';
            } else {
                res += '0';
            }
        }

        return res;
    }
};