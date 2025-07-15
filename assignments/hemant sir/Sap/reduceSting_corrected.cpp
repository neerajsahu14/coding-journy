#include <iostream>
#include <string>
#include <unordered_map>
#include <set>
#include <cctype>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    
    // Convert string to lowercase
    for(int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
    
    unordered_map<char,int> mp;
    set<char> st;
    string ans;
    
    // Count frequency of each character
    for(int i = 0; i < s.length(); i++){
        char c = s[i];
        mp[c]++;
        st.insert(c);
    }
    
    // Build result string
    for(auto c : st){
        ans += c;
        ans += to_string(mp[c]);
    }
    
    cout << ans << endl;
    return 0;
}
