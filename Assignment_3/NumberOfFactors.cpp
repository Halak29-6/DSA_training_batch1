#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countFactors(int n) {
        // code here
        int cnt=0;
        // if(n<=1) return n;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                cnt++;
                if(i*i!=n)
                cnt++;
            }
        }
        return cnt;
    }
};