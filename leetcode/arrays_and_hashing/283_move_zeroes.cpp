// LeetCode 283. Move Zeroes
// Idea: two indices; swap each non-zero into the next position at left.
// This preserves the order of non-zero elements and moves zeroes to the end.
// Time: O(n), Space: O(1) extra (modifies input in place)

#include <cstddef>
#include <utility>
#include <vector>

class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        std::size_t left = 0;
        for (std::size_t right = 0; right < nums.size(); ++right) {
            if (nums[right] != 0) {
                std::swap(nums[left], nums[right]);
                ++left;
            }
        }
    }
};
