// LeetCode 485. Max Consecutive Ones
// Idea: single pass, track the current run of 1s and the best run seen so far.
// Reset the current run to 0 whenever a 0 is hit.
// Time: O(n), Space: O(1)

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
int findMaxConsecutiveOnes(vector<int>& nums) {
  int current = 0;
int best = 0;
for (int num : nums) {
if (num == 1) {
current++;
best = max(best, current);
}
else {
current = 0;
}
}
return best;
}
};
