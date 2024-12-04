class Solution {
public:
bool isPalindrome(string s) {
    int l = 0;
    int r = s.size()-1;
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
                string tmp1 = s;
                string tmp2 = s;
                return isPalindrome(tmp1.erase(l, 1))|| isPalindrome(tmp2.erase(r, 1));

            }
        }
        return true;
    }

};