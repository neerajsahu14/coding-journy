#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
   vector<int> twoSum(vector<int>& nums, int target) {
       for(int i=0; i<nums.size(); i++){
           for(int j=i+1; j<nums.size(); j++){
               if(nums[i] + nums[j] == target){
                   vector<int> result = {i, j};
                   return result;
               }
           }
       }
       return {};
   }
};

int main() {
   // Test the twoSum function
   Solution solution;
   vector<int> numbers = {2, 7, 11, 15};
   int targetSum = 9;

   vector<int> indices = solution.twoSum(numbers, targetSum);

   if(indices.size() == 2){
       cout << "Indices of the two numbers that add up to the target: " << indices[0] << ", " << indices[1] << endl;
   }
   else{
       cout << "No two numbers found that add up to the target sum." << endl;
   }
   
   return 0;
}
