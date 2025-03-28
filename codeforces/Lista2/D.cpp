#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int T;
    cin >> T;

    for(int i = 0; i < T;i++){
        unsigned long long N;
        int P, Q;
        cin >> N >> P >> Q;

        int bitP = (N >> P) & 1;
        int bitQ = (N >> Q) & 1;

        if( bitP == bitQ){
            N = N;
            continue;
        }
        if(bitQ != bitP){
            N ^= (1ULL << P);
            N ^= (1ULL << Q);
        }
        cout << N << endl;
    }

    return 0;
}