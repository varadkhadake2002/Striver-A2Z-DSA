#include <iostream>
using namespace std;

double myPow(double x, int n) {
    long long N = n;  // Use long long to safely handle INT_MIN
    if (N < 0) {
        x = 1 / x;
        N = -N;
    }

    double result = 1.0;

    while (N > 0) {
        if (N % 2 == 1) {
            result *= x;
        }
        x *= x;
        N /= 2;
    }

    return result;
}

int main() {
    double x;
    int n;
    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter power (n): ";
    cin >> n;

    cout << "Result: " << myPow(x, n) << endl;

    return 0;
}
