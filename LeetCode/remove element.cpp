#include <iostream>
#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int p = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[p] = nums[i];
                p++;
            }
        }
        return p;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    int newSize = solution.removeElement(nums, val);
    
    std::cout << "New Size of the Array: " << newSize << std::endl;
    std::cout << "Updated Array: ";
    for (int i = 0; i < newSize; i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
