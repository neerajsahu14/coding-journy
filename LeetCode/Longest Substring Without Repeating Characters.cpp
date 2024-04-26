#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
   int lengthOfLongestSubstring(string s) {
       unordered_map<char, int> map;
       int start = 0, maxLen = 0;

       for (int i = 0; i < s.length(); i++) {
           if (map.find(s[i]) != map.end() && map[s[i]] >= start) {
               start = map[s[i]] + 1;
           }
           map[s[i]] = i;
           maxLen = max(maxLen, i - start + 1);
       }

       return maxLen;
   }
};

int main() {
   Solution sol;
   string input = "abcabcbb"; // Replace with your desired input string
   int result = sol.lengthOfLongestSubstring(input);
   cout << "Length of the longest substring without repeating characters: " << result << endl;
   return 0;
}
