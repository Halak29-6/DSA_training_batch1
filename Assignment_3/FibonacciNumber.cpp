#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int fibhelper(int n , int prev2 , int prev1){
    return (n==0) ? prev2 : (n==1) ? prev1 : fibhelper(n-1,prev1,prev1+prev2);
}
    int fib(int n) {
        return fibhelper(n,0,1);
    }
};