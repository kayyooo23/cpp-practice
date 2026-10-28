// LeetCode 242. Valid Anagram
// Idea: count letter frequencies with unordered_map. Increment for s, decrement
// for t. If the strings are anagrams, every count ends up at 0.
// Time: O(n), Space: O(1) (bounded alphabet)

#include <string>
#include <unordered_map>

bool isAnagram(const std::string& s, const std::string& t) {
    if (s.length() != t.length()) return false;

std::unordered_map<char, int> count;

for (char c : s) {
count[c]++;
}
for (char c : t) {
count[c]--;
}
for (auto const& pair : count) {
if (pair.second != 0) return false;
}
return true;
}
