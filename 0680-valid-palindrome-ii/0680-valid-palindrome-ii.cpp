class Solution {
public:
bool isPalindrome(string s, int l, int r) {
    while(l<=r){ 
        if(s[l] != s[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}
    bool validPalindrome(string s) {
        int l = 0;
        int r = s.size()-1;
        while(l<=r){ 
            if(s[l] == s[r]){
                l++;
                r--;
            }
            else{
                return isPalindrome(s, ++l, r)|| isPalindrome(s, --l, --r);

            }
        }
        return true;
    }

};