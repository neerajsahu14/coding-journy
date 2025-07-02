#include <bits/stdc++.h>
using namespace std;


int main() {
    string ip;
    cin >> ip;
    vector<std::string> parts;
    stringstream ss(ip);
    bool x = true;
    string item;
    while (getline(ss, item, '.')) {
        parts.push_back(item);
    }
    if (parts.size() != 4) x= false;
    for (const auto& part : parts) {
        if (part.empty() || part.size() > 3) x= false;
        for (char c : part) {
            if (!isdigit(c)) x =false;
        }
        if (part[0] == '0' && part.size() > 1) x= false;
        int num = stoi(part);
        if (num < 0 || num > 255) x= false;
    }
    cout<<x<<endl;
    
    return 0;
}