class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int min_buy= prices[0];
        int max_sell= 0;

        for (int i=0; i<n; i++){
            // buying minimum stock
            if (prices[i]< min_buy){
                min_buy= prices[i];
            }

            // selling at high price
            if (prices[i]> min_buy){
                int current_sell= prices[i]- min_buy;
                max_sell= max(max_sell, current_sell);
            }

        }
        return max_sell;
    }
};
