class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }else{
            string x_str = std::to_string(x);
            int i=0;
            int j=x_str.size()-1;
            while(i<j){
                if(x_str[i] != x_str[j]){
                    return false;
                }
                i++;
                j--;
            }
            return true;
        }
        
    }
};