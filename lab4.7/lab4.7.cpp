#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double xp, xk, dx, eps;
    cout << "xp = ";
    cin >> xp;
    cout << "xk = ";
    cin >> xk;
    cout << " dx = ";
    cin >> dx;
    cout << "eps = ";
    cin >> eps;

    cout << fixed;
    cout << "-------------------------------------------------\n";
    cout << "|         x |      exp(x) |      sum | Кільк. дод.\n";
    cout << "-------------------------------------------------\n";

    for (double x = xp; x <= xk; x += dx) {
        double sum = 1.0;
        double term = 1.0;
        int n = 1;

        while (fabs(term) > eps) {
            term *= x / n;
            sum += term;
            n++;
        }

        cout << "| " << setw(10) << x << " | " << setw(10) << exp(x) << " | " << setw(10) << sum << " | " << setw(10) << n << " |\n";
    }

    cout << "-------------------------------------------------\n";
    return 0;
}
