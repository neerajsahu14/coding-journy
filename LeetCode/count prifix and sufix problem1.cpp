#include <iostream>
#include <vector>
#include <string>

class Solution {
   bool isPrefixAndSuffix(const std::string& str1, const std::string& str2) {
       int m = str1.length();
       int n = str2.length();

       if (m > n) {
           return false;
       }

       for (int i = 0; i < m; i++) {
           if (str1[i] != str2[i]) {
               return false;
           }
       }

       for (int i = 0; i < m; i++) {
           if (str1[i] != str2[n - m + i]) {
               return false;
           }
       }

       return true;
   }

public:
   int countPrefixSuffixPairs(std::vector<std::string>& words) {
       int count = 0;
       int n = words.size();

       for (int i = 0; i < n; i++) {
           for (int j = i + 1; j < n; j++) {
               if (isPrefixAndSuffix(words[i], words[j])) {
                   count++;
               }
           }
       }

       return count;
   }
};

int main() {
   Solution solution;
   std::vector<std::string> words = {"abcde", "defg", "bcde", "cdefg", "efghij", "ghij", "hijabc"};

   int prefixSuffixPairsCount = solution.countPrefixSuffixPairs(words);
   std::cout << "Number of prefix-suffix pairs: " << prefixSuffixPairsCount << std::endl;

   return 0;
}
