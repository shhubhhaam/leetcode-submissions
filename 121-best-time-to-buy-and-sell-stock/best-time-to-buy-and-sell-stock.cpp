class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minValue = prices[0];

        for(int i : prices) {
            int profit = i - minValue;

            maxProfit = max(maxProfit, profit);
            minValue = min(minValue, i);
        }

        return maxProfit;
    }
};
