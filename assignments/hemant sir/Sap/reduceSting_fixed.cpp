#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    
    // Convert to lowercase (note: toLowerCase() is not a standard C++ function)
    // We'll use transform with tolower instead
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    unordered_map<char,int> mp;
    set<char> st;
    string ans;
    
    // Count frequency of each character
    for(auto c : s){
        mp[c]++;
        st.insert(c);
    }
    
    // Build result string
    for(auto c : st){
        ans += c;  // Add character
        ans += to_string(mp[c]);  // Add count as string
    }
    
    cout << ans << endl;
    return 0;
}
