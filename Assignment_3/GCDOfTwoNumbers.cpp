#include <iostream>
using namespace std;

class Solution {
public:
    int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }
};

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b;
    if (cin >> a >> b) {
        Solution obj;
        cout << obj.gcd(a, b) << "\n";
    }
    
    return 0;
}