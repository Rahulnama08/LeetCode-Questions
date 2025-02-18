class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int MaxProfit = 0;
        int MinSofar = prices[0];
        for(int i = 0; i<prices.size();i++){
           MinSofar = min(MinSofar,prices[i]);
           int profit = prices[i] - MinSofar;
           MaxProfit = max(MaxProfit,profit);
        }
        return MaxProfit;
    }
};