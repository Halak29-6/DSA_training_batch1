#include <iostream>
using namespace std;

class Solution {
private:
    int factorial(int n) {
        int fact = 1;
        for (int i = 2; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }
public:
    int isStrong(int N) {
        int sum = 0;
        int temp = N;
        while (temp > 0) {
            sum += factorial(temp % 10);
            temp /= 10;
        }
        return (sum == N) ? 1 : 0;
    }
};