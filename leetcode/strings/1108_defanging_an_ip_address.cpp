// LeetCode 1108. Defanging an IP Address
// Idea: walk the string, copy each character, and replace every '.' with the
// literal "[.]".
// Time: O(n), Space: O(n)

#include <string>

using namespace std;

class Solution {
public:
string defangIPaddr(string address) {
  string result = "";

for (char c : address) {
if (c == '.') {
result += "[.]";
}
else {
result += c;
}
}

return result;
}
};
