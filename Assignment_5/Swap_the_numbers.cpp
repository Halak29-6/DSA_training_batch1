#include <iostream>
#include <utility>
using namespace std;

class Solution {
public:
    pair<int, int> get(int a, int b) {
        int temp = a;
        a = b;
        b = temp;
        return {a, b};
    }
};

int main() {
    int a, b;
    if (cin >> a >> b) {
        Solution obj;
        pair<int, int> ans = obj.get(a, b);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}