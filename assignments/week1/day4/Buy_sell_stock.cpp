class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()){
            return 0;
        }
        int min_price_index = 0;
        int min_price = prices[0];
        for (int i = 0; i <= prices.size() - 1; i++) {
            if ((i + 1) != (prices.size() - 1)) {
                if (prices[i] < prices[i + 1] && prices[i] < min_price) {
                    min_price = min(prices[i], min_price);
                    min_price_index = i;
                }
            }
        }
        //cout <<min_price<<endl;
        int max_price = 0;
        for(int i = min_price_index + 1; i < prices.size(); i++){
            max_price = max(max_price, prices[i]);
        }
        //cout << max_price;
        int profit = max_price - min_price;
        if(max_price< min_price){
            profit = 0;
        }
        
        return profit;
    }
};

//I tried finding the min price first then after that I looked for the max price after the index for the minimum price. But I have some runtime errors.