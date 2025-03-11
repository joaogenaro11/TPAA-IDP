#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    long long somaT = (1LL * N * (N + 1) ) / 2;
    long long somaP = 0;

    int num;
    for (int i = 0; i < N - 1; i++){
        cin >> num;
        somaP += num;
    }
    cout << (somaT - somaP) << endl;

    return 0;
}