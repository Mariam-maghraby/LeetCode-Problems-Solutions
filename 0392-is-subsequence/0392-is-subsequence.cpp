class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;
        int i=0;

                while(i<t.size()){
                if(s[j] == t[i]){
                    j++;
                    i++;
                }
                else{
                i++;
                }
            }
            j++;
        
       return (j-1) == s.size();

    }
};