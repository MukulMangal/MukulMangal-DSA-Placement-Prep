class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int bestBuy = prices[0];

        for(int i = 1 ; i < prices.size(); i++){
            if(prices[i] > bestBuy){
                ans = max(ans , prices[i]-bestBuy);
            }
            bestBuy = min(prices[i] , bestBuy);
        }
        return ans;
        
    }
};