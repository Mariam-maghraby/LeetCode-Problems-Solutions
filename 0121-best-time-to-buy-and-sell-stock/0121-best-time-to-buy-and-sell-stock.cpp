class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0;
        int j=1;
        int minPrice = prices[i];
        int maxPrice =  0;
        int maxProfit =0;
        int buyIndx=i;
        // int sellIndx=j;
        while(j<prices.size()){
            if(minPrice> prices[j] && j<prices.size()-1){
                minPrice = prices[j];
                buyIndx=j;
            }

            // if(maxPrice< prices[j]){
            //     maxPrice = prices[j];
            //     sellIndx=j;
            // }
            if(buyIndx < j){
                maxProfit = max(maxProfit, prices[j]-minPrice);
            }

            j++;
        }

        return  maxProfit;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna