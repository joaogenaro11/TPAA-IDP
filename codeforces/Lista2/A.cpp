#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        long long X, Y;
        cin >> X >> Y;

        long long resultado = (X ^ Y);
        int dist = 0;
        while(resultado > 0){
            if (resultado % 2 == 1) dist++;
            resultado = resultado / 2;
        }
        cout << dist << endl;
    }

return 0;
}