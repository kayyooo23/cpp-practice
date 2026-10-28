// LeetCode 121. Best Time to Buy and Sell Stock
// Idea: single pass, track the minimum price seen so far and the best profit
// possible if sold at the current price.
// Time: O(n), Space: O(1)

#include <vector>

using namespace std;

class Solution {
public:
int maxProfit(vector<int>& prices) {
  int minPrice = prices[0];
int bestProfit = 0;
for (int price : prices) {
if (price < minPrice) {
minPrice = price;
}
else if (price - minPrice > bestProfit) {
bestProfit = price - minPrice;
}
}
return bestProfit;
}
};
