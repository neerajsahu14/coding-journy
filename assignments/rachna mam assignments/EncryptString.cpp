#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

char encryptChar(char c, int x, bool even) {
    int base = 'a';
    int offset = c - base;
    if (even) {
        offset = (offset + x) % 26;
    } else {
        offset = (offset - x + 26) % 26;
    }
    return static_cast<char>(base + offset);
}

int main()
{
    int x;
    string s;
    cin >> s;
    cin >> x;
    unordered_map<char, int> fq;
    for (char c : s) {
        fq[c]++;
    }
    for (size_t i = 0; i < s.size(); ++i) {
        s[i] = encryptChar(s[i], x, fq[s[i]] % 2 == 0);
    }
    for (char c : s) {
        cout << c ;
    }
    cout << endl;
    return 0;
}


