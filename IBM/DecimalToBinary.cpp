#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

// Function to convert a decimal number to binary
string decimalToBinary(int decimalNumber) {
    string binary = "";
    while (decimalNumber > 0) {
        binary = to_string(decimalNumber % 2) + binary;
        decimalNumber /= 2;
    }
    return binary.empty() ? "0" : binary;
}

int main() {
    int decimalNumber;

    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    if (decimalNumber < 0) {
        cout << "Please enter a non-negative integer." << endl;
    } else {
        string binary = decimalToBinary(decimalNumber);
        cout << "Binary representation: " << binary << endl;
    }

    return 0;
}