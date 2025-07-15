#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    cin>>s;
    s.toLowerCase();
    unordered_map<char,int> mp;
    set<char> st;
    string ans;
    for(auto c : s){
        mp[c]++;
        st.insert(c);
    }
    for(auto c : st){
        ans+= c + (string)(mp[c]);
    }
    cout<<ans;
    return 0;
}
