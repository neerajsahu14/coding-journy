#include <iostream>
#include <cctype>
using namespace std;

string toTitleCase(const string& text) {
    string result = text;
    bool capitalize = true;

    for (int i = 0; i < result.size(); i++) {
        if (isspace(result[i])) {
            capitalize = true;
        } else if (capitalize && isalpha(result[i])) {
            result[i] = toupper(result[i]);
            capitalize = false;
        } else {
            result[i] = tolower(result[i]);
        }
    }

    return result;
}

int main() {
    string input;
    getline(cin, input);

    string titleText = toTitleCase(input);
    cout << titleText << endl;

    return 0;
}