#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    double left = max(0.0, (C - B) / A);
    double right = (C + B) / A;

    const double EPS = 1e-8;
    while (right - left > EPS) {
        double mid = (left + right) / 2;
        double f_mid = A * mid + B * sin(mid) - C;

        if (f_mid <= 0) {
            left = mid;
        } else {
            right = mid;
        }
    }

    double x = (left + right) / 2;
    cout << fixed << setprecision(4) << x << endl;

    return 0;
}