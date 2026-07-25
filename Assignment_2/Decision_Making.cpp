#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;

    // code here
    if(n==m){
        cout<<"equal";
    }
    else if(n<m){
        cout<<"less";
    }
    else{
        cout<<"greater";
    }

    return 0;
}