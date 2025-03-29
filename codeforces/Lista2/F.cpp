#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> C(N);
        for (int i = 0; i < N; i++) {
            cin >> C[i];
        }

        int S;
        cin >> S;

        bool achei = false;
        int i = 0, j = N - 1;

        while (i < j) {
            int soma = C[i] + C[j];
            if (soma == S) {
                achei = true;
                break;
            } else if (soma < S) {
                i++;
            } else {
                j--;
            }
        }

        if (achei) {
            cout << "SIM" << endl;
        } else {
            cout << "NAO" << endl;
        }
    }

    return 0;
}