#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int getOddOccurrence(vector<int>& arr) {
        int xor1 = arr[0];
        for(int i=01;i<arr.size();i++){
            xor1 = xor1^arr[i];
        }
        return xor1;
    }
};