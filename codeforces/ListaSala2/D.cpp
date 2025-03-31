#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string R, S;
        cin >> R >> S;

        string result;

        for (int i = 0; i < R.size(); i++) {
            if (isupper(R[i]) == isupper(S[i])) {
                result += toupper(R[i]);
            } else {
                result += tolower(R[i]);
            }
        }

        cout << result << endl;
    }

    return 0;
}