#include <bits/stdc++.h>
using namespace std;

int countStones(const string& s) {
    int open = 0;
    int stones = 0;
    for (char c : s) {
        if (c == '<') {
            open++;
        } else if (c == '>' && open > 0) {
            stones++;
            open--;
        }
    }
    return stones;
}

int main() {
    int N;
    cin >> N;
    cin.ignore(); 
    
    while (N--) {
        string block;
        getline(cin, block);
        cout << countStones(block) << endl;
    }
    
    return 0;
}