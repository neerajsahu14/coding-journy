#include <iostream>
using namespace std;

string compress(const string& s) {
    string result;
    int count = 1;
    
    for (int i = 1; i <= s.length(); ++i) {
        if (i < s.length() && s[i] == s[i - 1]) {
            count++;
        } else {
            result += s[i - 1] + to_string(count);
            count = 1;
        }
    }
    
    return result;
}

int main() {
    string s = "aabbbcccdddccc";
    cout << compress(s) << endl;
    return 0;
}