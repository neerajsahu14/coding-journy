#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // int n;
    // cin>>n;
    string s;
    cin>>s;
    unordered_map<char,int> mp;
    for(auto c: s){
        mp[c]++;
    }
    cout<<mp['*']-mp['#'];
    return 0;
}

