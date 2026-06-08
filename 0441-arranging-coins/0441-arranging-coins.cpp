class Solution {
public:
    int arrangeCoins(int n) {
        int i=1;
        while(n != 0){
            n=n-i;
            if(n<=0){
                break;
            }
            i++;
        }
       return n==0? i: i-1;
    }
};