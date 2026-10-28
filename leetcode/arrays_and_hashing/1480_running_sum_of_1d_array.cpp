// LeetCode 1480. Running Sum of 1d Array
// Idea: in-place prefix sum. Each element adds the running total of everything
// before it.
// Time: O(n), Space: O(1) extra (modifies input in place)

#include <vector>

using namespace std;

class Solution {
public:
vector<int> runningSum(vector<int>& nums) {
  int n = nums.size();
for (int i = 1; i < n; i++) {
nums[i] += nums[i - 1];
}
return nums;
}
};
