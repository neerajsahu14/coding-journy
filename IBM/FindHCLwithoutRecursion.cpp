#include <iostream>
using namespace std;

int findHCF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findHCF2(int a, int b){
    while(b!=a){
        if(a>b){
            int rem = (a % b != 0) ? (a % b) : 1;
            a = a - b * rem;
        } else {
            int rem = (b % a != 0) ? (b % a) : 1;
            b=b-a*(rem);
        }
    }
    return a;
}
// 

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int hcf = findHCF2(num1, num2);
    cout << "HCF of " << num1 << " and " << num2 << " is: " << hcf << endl;

    return 0;
}