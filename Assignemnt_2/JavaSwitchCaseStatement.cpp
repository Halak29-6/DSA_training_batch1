#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    double switchCase(int choice, vector<double> &arr) {
        // code here
        switch(choice){
            case 1:{
            double r = arr[0];
                return M_PI * pow(r,2);
            }
                
            case 2:{
            double len = arr[0];
            double bth = arr[1];
            return len*bth;
            }
            default:
            return 0.0;
        }
    }
};
