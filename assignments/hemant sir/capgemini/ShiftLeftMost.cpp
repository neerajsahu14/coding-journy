#include <bits/stdc++.h>

// shift all * at leftmost of string
using namespace std;

int main() {
    string s;
    cin >> s;

    int starCount = count(s.begin(), s.end(), '*');
    string result(starCount, '*');
    for (char c : s) {
        if (c != '*') result += c;
    }

    cout << result << endl;
    return 0;
}
