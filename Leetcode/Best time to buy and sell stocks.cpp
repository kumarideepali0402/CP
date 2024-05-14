class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> suffixmax(prices.size());
        suffixmax[prices.size()-1]=prices[prices.size()-1];
        for(int j=prices.size()-2;j>0;j--){
            suffixmax[j]=max(suffixmax[j+1],prices[j]);
        }

        int profit=0;
        for(int i=0;i<prices.size()-1;i++){
            int currprofit=suffixmax[i+1]-prices[i];
            if(currprofit>profit) profit=currprofit;
            
        }
        return profit;
    }
};