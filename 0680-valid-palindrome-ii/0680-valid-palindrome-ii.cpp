class Solution {
public:
    bool vaildPal(string s, int l, int r){
        while(l<r){
            if(s[l] != s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int r = s.size()-1;
        int l = 0;
        while(l<r){
            if(s[r] != s[l] )
                return vaildPal(s, l+1, r) || vaildPal(s, l, r-1);
            l++;
            r--;
        }
        return true;
    }
};