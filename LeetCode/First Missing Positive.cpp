#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
   int firstMissingPositive(vector<int>& nums) {
       int n = nums.size();
       for(int i = 0; i < n; i++){
           int x = nums[i];
           while(x >= 1 && x <= n && x != i + 1 && nums[x - 1] != x){
               swap(nums[x - 1], nums[i]);
               x = nums[i];
           }
       }
       for(int i = 0; i < n; i++){
           if(nums[i] == i + 1) continue;
           return i + 1;       
       }
       return n + 1;
   }
};

int main() {
   Solution solution;
   vector<int> nums = {3, 4, -1, 1};
   int result = solution.firstMissingPositive(nums);
   cout << "The first missing positive integer is: " << result << endl;
   return 0;
}
