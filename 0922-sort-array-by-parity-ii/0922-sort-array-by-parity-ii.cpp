#include <utility>
#include <vector>

class Solution {
public:
    std::vector<int> sortArrayByParityII(std::vector<int>& nums) {
        int n = static_cast<int>(nums.size());
        int evenIdx = 0;
        int oddIdx = 1;

        while (evenIdx < n && oddIdx < n) {
            while (evenIdx < n && nums[evenIdx] % 2 == 0) {
                evenIdx += 2;
            }
            while (oddIdx < n && nums[oddIdx] % 2 == 1) {
                oddIdx += 2;
            }
            if (evenIdx < n && oddIdx < n) {
                std::swap(nums[evenIdx], nums[oddIdx]);
            }
        }

        return nums;
    }
};