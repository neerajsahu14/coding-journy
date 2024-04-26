#include <iostream>

class Solution {
public:
   bool isPalindrome(int a) {
       if(a < 0 || (a != 0 && a % 10 == 0))
           return false;
       int count = 0;
       while(count < a){
           count = count * 10 + a % 10;
           a /= 10;
       }
       if(count == a || count / 10 == a)
           return true;
       return false;
   }
};

int main() {
   Solution sol;
   int num = 12321; // You can change the value of num to test different cases
   std::cout << "Is " << num << " a palindrome? " << (sol.isPalindrome(num) ? "Yes" : "No") << std::endl;
   return 0;
}
