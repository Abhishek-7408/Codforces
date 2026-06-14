#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long A, B;
    cin >> A >> B;

    double x = (double)A / B;

    cout << "floor " << A << " / " << B << " = " << (long long)floor(x) << endl;
    cout << "ceil " << A << " / " << B << " = " << (long long)ceil(x) << endl;
    cout << "round " << A << " / " << B << " = " << (long long)round(x) << endl;

    return 0;
}