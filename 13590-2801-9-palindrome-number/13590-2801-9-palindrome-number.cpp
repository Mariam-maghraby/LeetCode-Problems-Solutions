class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }else{
            long rev=0;
            int org = x;
            while(x){
                int n = x%10;
                rev = rev*10 +n;
                x /= 10;
            }
            return rev == org;
            
        }       
        
    }
};