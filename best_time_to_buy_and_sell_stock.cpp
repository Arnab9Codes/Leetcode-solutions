/* 
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int buy=INT_MAX;//lowest point
        int max_profit=0;
        int profit=0;
        
        for(int i=0;i<prices.size();i++){
            //finding the lowest value
            if(prices[i]<buy){
                buy=prices[i];
            }
            // seeing if any profit is greater
            profit=prices[i]-buy;
            
            if(profit>max_profit){
                max_profit=profit;
            }
        }
        return max_profit;
    }

};
