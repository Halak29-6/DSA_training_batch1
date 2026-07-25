#include <iostream>
using namespace std;

class Solution {
public:
    int isLeap(int N) {
        if (N % 400 == 0) return 1;
        if (N % 100 == 0) return 0;
        if (N % 4 == 0) return 1;
        return 0;
    }
};

int main() {
    int N;
    cin >> N;
    Solution obj;
    cout << obj.isLeap(N) << "\n";
    return 0;
}