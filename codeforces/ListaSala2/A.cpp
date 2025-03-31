#include <bits/stdc++.h>
using namespace std;

int main (){
    ios_base::sync_with_stdio(false);

    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        int A, B;
        cin >> A >> B;
        int Y;
        cin >> Y;

        int C = A ^ B ^ Y;

         if(C >= 0 && C <= 1e8) {
            cout << C << endl;
        } else {
            cout << -1 << endl;
        }

    }

    return 0;
}