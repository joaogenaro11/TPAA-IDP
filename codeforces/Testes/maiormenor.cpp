#include <iostream> 
using namespace std;

int main(){

    int N;
    cin >> N;

    for (int i = 0; i < N; i++){
        int a, b;
        cin >> a >> b;
        if (a > b){
            cout << a << " " << b << endl;
        }
        else{
            cout << b << " " << a << endl;
        }
    }
    return 0;
}