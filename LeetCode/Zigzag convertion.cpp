#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
   std::string convert(std::string s, int numRows) {
       std::vector<std::string> ans(numRows);
       if (numRows == 1) {
           return s;
       }
       bool flag = false;
       int i = 0;
       for (auto ch : s) {
           ans[i] += ch;
           if (i == 0 || i == numRows - 1) {
               flag = !flag;
           }
           if (flag) {
               i++;
           }
           if (!flag) {
               i--;
           }
       }
       std::string n = "";
       for (auto i : ans) {
           n += i;
       }
       return n;
   }
};

int main() {
   Solution solution;
   std::string inputString = "PAYPALISHIRING";
   int numRows = 3;
   std::string convertedString = solution.convert(inputString, numRows);
   std::cout << "Converted String: " << convertedString << std::endl;
   return 0;
}
