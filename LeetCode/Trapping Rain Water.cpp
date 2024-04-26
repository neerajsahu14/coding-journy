#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
   int trap(vector<int>& height) {
       int n = height.size();
       if (n == 0) return 0;
       vector<int> left(n);
       vector<int> right(n);
       left[0] = height[0];
       for (int i = 1; i < n; i++) {
           left[i] = max(left[i - 1], height[i]);
       }
       right[n - 1] = height[n - 1];
       for (int i = n - 2; i >= 0; i--) {
           right[i] = max(right[i + 1], height[i]);
       }
       int totalWater = 0;
       for (int i = 0; i < n; i++) {
           totalWater += min(left[i], right[i]) - height[i];
       }
       return totalWater;
   }
};

int main() {
   Solution obj;
   vector<int> heights = {0,1,0,2,1,0,1,3,2,1,2,1};
   int trappedWater = obj.trap(heights);
   cout << "The total trapped water is: " << trappedWater << endl;
   return 0;
}
