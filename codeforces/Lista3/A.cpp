#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    stack<char> pilha;

    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            pilha.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (pilha.empty()) {
                cout << "SyntaxError" << endl;
                return 0;
            }
            char topo = pilha.top();
            pilha.pop();
            if ((c == ')' && topo != '(') ||
                (c == ']' && topo != '[') ||
                (c == '}' && topo != '{')) {
                cout << "SyntaxError" << endl;
                return 0;
            }
        }
    }

    if (pilha.empty()) {
        cout << "OK" << endl;
    } else {
        cout << "SyntaxError" << endl;
    }

    return 0;
}