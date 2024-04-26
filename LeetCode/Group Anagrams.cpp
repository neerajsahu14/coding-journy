#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <cassert>
using namespace std;
class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> mp;

        for (auto x : strs)
        {
            string word = x;
            sort(word.begin(), word.end());
            mp[word].push_back(x);
        }

        vector<vector<string>> ans;
        for (auto x : mp)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<string> input = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = s.groupAnagrams(input);

    // Print the result
    for (const vector<string> &group : result)
    {
        cout << "[ ";
        for (const string &str : group)
        {
            cout << str << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
