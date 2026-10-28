// LeetCode 217. Contains Duplicate
// Idea: a hand-rolled flat open-addressing hash table instead of unordered_set,
// to see how a hash map actually works underneath: power-of-two table size,
// a multiplicative hash, and linear probing to resolve collisions.
// Time: O(n) average, Space: O(n)

#include <vector>
#include <cstdint>

using namespace std;

class Solution {
public:
bool containsDuplicate(vector<int>& nums) {
  // Table size: a power of two, at least twice the number of elements.
size_t cap = 1;
while (cap < nums.size() * 2) cap <<= 1;
size_t mask = cap - 1; // x & mask == x % cap, but faster

vector<int> table(cap); // the numbers, stored contiguously
vector<char> used(cap, 0); // is this cell occupied?

for (int x : nums) {
size_t h = ((uint32_t)x * 2654435761u) & mask; // hash: mix bits, take a cell
while (used[h]) { // cell occupied: is it the same number?
if (table[h] == x) return true;
h = (h + 1) & mask; // no: try the next cell
}
used[h] = 1; // free cell: store the number
table[h] = x;
}
return false;
}
};
