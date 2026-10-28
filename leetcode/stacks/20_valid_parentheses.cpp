// LeetCode 20. Valid Parentheses
// Idea: push opening brackets onto a stack. On a closing bracket, check it
// matches the top of the stack, then pop. Invalid if it doesn't match, the
// stack is empty when a closing bracket arrives, or anything is left over.
// Time: O(n), Space: O(n)

#include <string>
#include <stack>

using namespace std;

class Solution {
public:
bool isValid(string s) {
  stack<char> st;
for (char c : s) {
if (c == '(' || c == '{' || c == '[') {
st.push(c);
}
else {
if (st.empty()) {
return false;
}
char top = st.top();

if ((c == ')' && top != '(') ||
  (c == '}' && top != '{') ||
  (c == ']' && top != '[')) {
return false;
}
st.pop();
}
}
return st.empty();
}
};
