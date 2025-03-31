#include <bits/stdc++.h>
using namespace std;

int main(){

    unsigned int N;
    cin >> N;

    unsigned int R = 0;

    for(int i = 0; i < 32;i++){
        R = (R << 1) | (N & 1);
        N = N >> 1;
    }
    
    cout << R << endl;
    
    return 0;
}