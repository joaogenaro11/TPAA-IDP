#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        int A, B;
        cin >> A >> B;
        int Y;
        cin >> Y;

        int C = Y & ~(A | B);

        if((A | B | C) == Y){
            cout << C << endl;
        } else{
            cout << -1 << endl;
        }
    }

    return 0;
}