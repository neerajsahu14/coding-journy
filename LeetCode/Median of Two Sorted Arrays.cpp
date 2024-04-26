#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
   double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
       int p = nums1.size() + nums2.size();
       int a[p];
       int k = 0;
       for (int i = 0; i < nums1.size(); i++)
           a[i] = nums1[i];
       for (int i = nums1.size(); i < p; i++) {
           a[i] = nums2[k];
           k++;
       }
       std::sort(a, a + p);
       if (p % 2 == 0)
           return (double)(a[p / 2] + (a[(p / 2) - 1])) / 2.0;
       else
           return (double)a[p / 2];
   }
};

int main() {
   Solution s;
   std::vector<int> nums1 = {1, 3, 5};
   std::vector<int> nums2 = {2, 4, 6};
   std::cout << "Median of the two sorted arrays is: " << s.findMedianSortedArrays(nums1, nums2) << std::endl;
   return 0;
}
