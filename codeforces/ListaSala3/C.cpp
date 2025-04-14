#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    queue<int> baralho;
    for (int i = N; i >= 1; --i) {
        baralho.push(i);
    }

    vector<int> descartes;

    while (baralho.size() > 1) {
        int descarte = baralho.front();
        baralho.pop();
        descartes.push_back(descarte);

        if (!baralho.empty()) {
            int mover = baralho.front();
            baralho.pop();
            baralho.push(mover);
        }
    }

    cout << "Descarte:";
    if (!descartes.empty()) {
        cout << " ";
        for (size_t i = 0; i < descartes.size(); ++i) {
            cout << descartes[i];
            if (i != descartes.size() - 1) {
                cout << ", ";
            }
        }
    }
    cout << "\nUltima carta: " << baralho.front() << endl;

    return 0;
}

/*#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    queue<int> q;
    for (int i = N; i >= 1; i--){
        q.push(i);
    }
    
    vector<int> descartadas;
    while(q.size() > 1){
        descartadas.push_back(q.front());
        q.pop();
        int carta = q.front();
        q.pop();
        q.push(carta);
    }
    
    cout << "Descarte: "; 
    if(!descartadas.empty()){
        cout << descartadas[0];
        for (size_t i = 1; i < descartadas.size(); i++){
            cout << ", " << descartadas[i];
        }
    }
    cout << "\n";
    
    cout << "Ultima carta: " << q.front() << "\n";
    
    return 0;
}*/