#include <iostream>
#include <cmath>

using namespace std;

int divide(int dividend, int divisor) {
    int k = 0;
    if (divisor == 0) {
        return 0;
    }
    if (dividend == INT_MIN && divisor == -1) {
        return INT_MAX;
    }
    if (dividend == INT_MIN && divisor == 1) {
        return INT_MIN;
    }
    int d;
    if (dividend == INT_MIN) {
        d = INT_MAX;
    }
    else {
        d = abs(dividend);
    }
    int r = abs(divisor); 
    while (d >= r) {
        d-= r;
        if ((dividend > 0 && divisor > 0) || (dividend < 0 && divisor < 0)) {
            ++k;
        }
        if ((dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0)) {
            --k;
        }
    }
    return k;
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << divide(x, y) << endl;
    return 0;
}