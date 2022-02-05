/*You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
*/
//leetcode 121
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size(),i=0;
        int max=prices[0];
        int min=prices[0];
        int index=0;
        for(i=1;i<n;i++){
            if(prices[i]<min ){
                min=prices[i];
                max=prices[i];
            }
            if(prices[i]>max ){
                max=prices[i];
                
            }
            if(max-min>index){
                index=max-min;
            }
        }
        
        return index;
        
        
    }
};