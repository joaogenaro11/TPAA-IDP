#include <iostream>
using namespace std;

int main(){

    while(true){
        int D;
        cin >> D; 

        if (D == -1) break;

        string N;
        cin >> N;

        int somaD = 0;
        for (char c : N) {
             somaD += (c - '0');
        }

        cout << somaD << " ";
        if (somaD % 3 == 0){
            cout << "sim" << endl;
        } else{
            cout << "nao" << endl;
        }
    }
    
    return 0;
}