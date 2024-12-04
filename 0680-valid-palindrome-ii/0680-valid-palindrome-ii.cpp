class Solution {
public:
bool isPalindrome(string s) {
    int l = 0;
    int r = s.size()-1;
    while(l<=r){ 
        if(s[l] == s[r]){
            l++;
            r--;
        }
        else{
            return false;
        }
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
                string tmp = s;
                tmp.erase(l, 1);
                bool res = isPalindrome(tmp);
               if(res){
                return res;
               }else{
                string tmp = s;
                tmp.erase(r, 1);
                return isPalindrome(tmp);
               }

            }
        }
        return true;
    }

};