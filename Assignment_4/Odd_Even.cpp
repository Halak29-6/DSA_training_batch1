#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string oddEven(int N) {
        return (N % 2 == 0) ? "even" : "odd";
    }
};

int main() {
    int N;
    cin >> N;
    Solution obj;
    cout << obj.oddEven(N) << "\n";
    return 0;
}