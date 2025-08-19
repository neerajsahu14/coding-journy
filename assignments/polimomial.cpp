#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;
    std::cin >> a;
    std::cin >> b;

    double result = pow(a, 2) + pow(b, 2) + 2*a*b; // (a+b)^2
    cout << "(a + b)^2 = " << result <<endl;

    return 0;
}