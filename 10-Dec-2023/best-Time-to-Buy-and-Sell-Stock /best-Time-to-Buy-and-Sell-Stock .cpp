class Solution {
public:
    int maxProfit(vector<int>& prices) {
        const int n = prices.size();
        int ans = 0;
        int curr_min = prices[0];
        for(int i = 1; i<n; i++){
            ans = max(ans, (prices[i] - curr_min));
            curr_min = min(prices[i], curr_min);
        }
        
        return ans;
    }
};


