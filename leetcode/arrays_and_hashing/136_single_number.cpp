// LeetCode 136. Single Number
// Idea: XOR all elements. x ^ x = 0, 0 ^ x = x, XOR is commutative/associative,
// so every pair cancels out and only the single number remains.
// Time: O(n), Space: O(1)

#include <vector>

class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num;
        }
        return result;
    }
};
