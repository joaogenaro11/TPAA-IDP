#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int N;
    cin >> N;

    for (int i = 0; i < N; i++){
        long long V;
        cin >> V;

        if (V == 1) { 
            cout << "o numero " << V << " nao eh primo" << endl;
            continue;
        }
        if (V == 2 || V == 3) { 
            cout << "o numero " << V << " eh primo" << endl;
            continue;
        }
        if (V % 2 == 0 || V % 3 == 0) { 
            cout << "o numero " << V << " nao eh primo" << endl;
            continue;
        }
        bool primo = true;

        for (int j = 5; j * j <= V; j += 2){
        if (V % j == 0){
            primo = false;
            break;
        } 
        }
        if (primo){
            cout << "o numero " << V << " eh primo" << endl;  
        } else {
            cout << "o numero " << V << " nao eh primo" << endl;
        }
    }
    return 0;
}