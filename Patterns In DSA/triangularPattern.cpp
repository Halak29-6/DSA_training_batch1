#include<bits/stdc++.h>
using namespace std;
int main(){
/*  1
    123
    1234
*/
    int numOfRows;
    cin>>numOfRows;

    for(int row = 0;row<=numOfRows;row++){
        for(int col = 1;col<=row;col++){
            cout<<col<<" ";
        }
        cout<<"\n";
    }
    return 0;
}