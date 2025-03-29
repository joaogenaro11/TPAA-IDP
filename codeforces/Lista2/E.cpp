#include <iostream>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        unsigned long long V;
        cin >> V;
        unsigned long long oriV = V; // mantem o valor original de V 

        int bits1 = 0;
        while (V > 0) {
            bits1 += (V & 1);
            V >>= 1;
        }

        bool ehPrimo = true;
        if (bits1 < 2) ehPrimo = false;
        else {
            for (int j = 2; j * j <= bits1; j++) {
                if (bits1 % j == 0) {
                    ehPrimo = false;
                    break;
                }
            }
        }

        if (ehPrimo) cout << oriV << " eh um pribit\n";
        else cout << oriV << " nao eh um pribit\n";
    }

    return 0;
}