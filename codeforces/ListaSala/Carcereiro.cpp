#include <bits/stdc++.h>
using namespace std;

int main(){
     ios_base::sync_with_stdio(false);

    unsigned long long N; 
    int Q;
    cin >> N >> Q;

    while (Q--){
        int C;
        cin >> C;
        unsigned long long  mask = 1ULL << C;
        if(N & mask) {
            cout << "acesa" << endl;
        } else {
            cout << "apagada" << endl;
        }
    }
return 0;
}