class Solution {
public:
    string cleanAndLowercase(const string& s) {
        string result;
        for (char c : s) {
            if (std::isalnum(static_cast<unsigned char>(c))) {
                result += tolower(static_cast<unsigned char>(c));
            }
        }
        return result;
    }
    bool isPalindrome(string s) {
        string sr = cleanAndLowercase(s);
        int l = 0;
        int r = sr.size()-1;
        while(l<r){
            if(sr[r] != sr[l]){
                return false;
            }
            l++;
            r--;
        }
    return true;
    }
};