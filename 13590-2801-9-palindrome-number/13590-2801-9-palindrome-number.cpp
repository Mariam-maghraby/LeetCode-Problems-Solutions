class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }else{
            long long rev=0;
            int org = x;
            while(x != 0){
                int n = x%10;
                rev = rev*10 +n;
                x /= 10;
            }
            if(rev == org){
                return true;
            }else{
                return false;
            }
        }       
        
    }
};