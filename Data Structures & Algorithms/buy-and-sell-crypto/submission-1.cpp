class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, n = prices.size();
        if(n <= 1) return 0;
        int minimum = prices[0];
        for(int i = 0; i < n; i++) {
            minimum = min(minimum,prices[i]);
            profit = max(profit, prices[i] - minimum);
        }
        return profit;
    }
};
