#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
   int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
       vector<pair<string, int>> all;
       for(int v : arr1){
           all.emplace_back(to_string(v), 0);
       }
       for(int v : arr2){
           all.emplace_back(to_string(v), 1);
       }
       sort(all.begin(), all.end());
       vector<string> last(2);
       int ans = 0;
       for(auto [k, v] : all){
           string u = last[v ^ 1];
           int p = 0;
           while(p < u.size() && p < k.size() && u[p] == k[p]) p++;
           ans = max(ans, p);
           last[v] = k;
       }
       return ans;
   }
};

int main() {
   Solution s;
   vector<int> arr1 = {123, 456, 789};
   vector<int> arr2 = {125, 456, 789};
   cout << s.longestCommonPrefix(arr1, arr2) << endl;
   return 0;
}
