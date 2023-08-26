class Solution {
public:
    bool isSubsequence(string s, string t) {
        string prefix = "";
        int j=0;
        int i=0;

            while( j<s.size()){
                while(i<t.size()){
                if(s[j] == t[i]){
                    prefix += s[j];
                    j++;
                    i++;
                }
                else{
                i++;
                }
            }
            j++;
        }
        if(prefix == s){
            return true;
        }
        return false;

    }
};