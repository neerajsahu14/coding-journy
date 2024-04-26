#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
   bool isPrime(int num) {
       if (num <= 1) return false;
       if (num <= 3) return true;
       if (num % 2 == 0 || num % 3 == 0) return false;
       for (int i = 5; i * i <= num; i += 6) {
           if (num % i == 0 || num % (i + 2) == 0) return false;
       }
       return true;
   }

   int maximumPrimeDifference(vector<int>& nums) {
       int maxDistance = 0;
       int prevPrimeIndex = -1;

       for (int i = 0; i < nums.size(); ++i) {
           if (isPrime(nums[i])) {
               if (prevPrimeIndex != -1) {
                   maxDistance = max(maxDistance, i - prevPrimeIndex);
               }
               if (prevPrimeIndex == -1) {
                   prevPrimeIndex = i;
               }
           }
       }
       return maxDistance;
   }
};

int main() {
   Solution sol;
   vector<int> nums = {4, 6, 7, 11, 15, 16, 17, 20, 23};
   cout << "Maximum prime difference: " << sol.maximumPrimeDifference(nums) << endl;
   return 0;
}
