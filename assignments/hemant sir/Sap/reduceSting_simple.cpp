#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;

int main()
{
    string s;
    cout << "Enter string: ";
    cin >> s;
    
    // Convert to lowercase manually
    for(size_t i = 0; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i] + 32; // Convert to lowercase
        }
    }
    
    map<char,int> mp;
    set<char> st;
    string ans = "";
    
    // Count frequency of each character
    for(size_t i = 0; i < s.size(); i++){
        char c = s[i];
        mp[c]++;
        st.insert(c);
    }
    
    // Build result string
    for(set<char>::iterator it = st.begin(); it != st.end(); it++){
        char c = *it;
        ans += c;
        
        // Convert integer to string manually
        int count = mp[c];
        string countStr = "";
        if(count == 0) countStr = "0";
        else {
            while(count > 0){
                countStr = char('0' + count % 10) + countStr;
                count /= 10;
            }
        }
        ans += countStr;
    }
    
    cout << "Result: " << ans << endl;
    return 0;
}
