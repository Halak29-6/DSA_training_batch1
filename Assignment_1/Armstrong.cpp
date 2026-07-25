#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string armstrongNumber(int n) {
        int originalNumber = n;
        int sum = 0;
        
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit * digit;
            n /= 10;
        }
        
        return (sum == originalNumber) ? "Yes" : "No";
    }
};