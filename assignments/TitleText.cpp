#include <iostream>
#include <cctype>
#include <sstream>
using namespace std;

string toTitleCaseSmart(const string& text) {
    stringstream ss(text);
    string word, result;

    while (ss >> word) {
        bool isAllUpper = true;
        for (char ch : word) {
            if (!isupper(ch)) {
                isAllUpper = false;
                break;
            }
        }

        if (!isAllUpper) {
            word[0] = toupper(word[0]);
            for (int i = 1; i < word.length(); ++i)
                word[i] = tolower(word[i]);
        }

        if (!result.empty()) result += " ";
        result += word;
    }

    return result;
}

int main() {
    string input;
    getline(cin, input);

    string titleText = toTitleCaseSmart(input);
    cout << titleText << endl;

    return 0;
}