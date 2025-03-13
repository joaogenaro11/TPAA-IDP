#include <iostream>
#include <string>
using namespace std;

int main(){

    long long N;
    int B;

    while (cin >> N >> B){
        if (N == -1 && B == -1) break;

        if (N == 0){
            cout << "0" << endl;
            continue;
        } 
        string resultado = "";
        long long num = N;

        while (num > 0){
            int rem = num % B;
            num = num / B;

           char digit;
           if (rem < 10){
            digit = '0' + rem;
           } else {
            digit = 'A' + (rem - 10);
           }
           resultado.push_back(digit);
        }
         int len = resultado.size();
         for (int i = 0; i < len / 2; i++){
            swap(resultado[i], resultado[len -1 -i]);
         }
            cout << resultado << endl;
    }
    return 0;
}