Approach: Create a variable maxProfit and store 0 initially.
Create a variable minPrice and store some larger value(ex: MAX_VALUE) value initially.
Run a for loop from 0 to n.
Update the minPrice if it is greater than the current element of the array
Take the difference of the minPrice with the current element of the array and compare and maintain it in maxProfit.
Return the maxProfit.








class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int minPrice = prices[0];
    int maxProfit = 0;
    int n = prices.size();
   

    for (int i = 1; i < n; i++) {
        int diff= prices[i] - minPrice;
       maxProfit = max(maxProfit, diff);
       minPrice = min(minPrice, prices[i]);                                     
    }
    
    return maxProfit;
}
    
};
