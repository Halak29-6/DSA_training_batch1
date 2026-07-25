#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int largest(vector<int> &arr, int n) {
        int max_val = arr[0];
        for(int i = 1; i < n; i++) {
            if(arr[i] > max_val) {
                max_val = arr[i];
            }
        }
        return max_val;
    }
};