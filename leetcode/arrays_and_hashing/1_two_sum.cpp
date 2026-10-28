// LeetCode 1. Two Sum
// Idea: brute-force check every pair (i, j) for nums[i] + nums[j] == target.
// This is the naive approach, not the optimized one-pass hash map version.
// Time: O(n^2), Space: O(1)

#include <vector>

using namespace std;

class Solution {
public:
vector<int> twoSum(vector<int>& nums, int target) {
  int n = nums.size();
for (int i = 0; i < n; i++) {
for (int j = i + 1; j < n; j++) {
if (nums[i] + nums[j] == target) {
return {i, j};
}
}
}
return {};
}
};
