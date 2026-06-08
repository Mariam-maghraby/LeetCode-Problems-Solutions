class Solution {
public:
    int arrangeCoins(int n) {
        int i=1;
        while(true){
            n=n-i;
            if(n<=0){
                break;
            }
            i++;
        }
       return n==0? i: i-1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna