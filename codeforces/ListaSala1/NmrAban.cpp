#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    
    while(true){
        int N;
        cin >> N;

        if(N == -1) break;

        int sol = 0;

        for (int i = 0; i < N; i++){
           int num;
           cin >> num;

           sol ^= num;
        }
    cout << sol << endl;
    }
    return 0;
}