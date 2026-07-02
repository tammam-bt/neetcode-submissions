class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, n = prices.size();
        if(n <= 1) return 0;
        int i = 0, j = 1;
        while(i < n && j < n) {
            if(prices[i] < prices[j]) profit = max(profit,prices[j]-prices[i]);
            else {
                if(prices[j] < prices[i]) {
                    i = j;
                }
            }
            j++;
        }
        return profit;
    }
};
