//  Problem Solution  link https://leetcode.com/submissions/detail/1240968986/
#include <iostream>

class Solution {
public:
   int tribonacci(int n) {
       if (n == 0) {
           return 0;
       }
       int a = 0, b = 1, c = 1;
       for (int i = 3; i <= n; i++) {
           int temp = a + b + c;
           a = b;
           b = c;
           c = temp;
       }
       return c;
   }
};

int main() {
   Solution sol;
   int n = 5; // Example input, you can change this value to test different cases
   std::cout << "Tribonacci number at position " << n << " is: " << sol.tribonacci(n) << std::endl;

   return 0;
}
