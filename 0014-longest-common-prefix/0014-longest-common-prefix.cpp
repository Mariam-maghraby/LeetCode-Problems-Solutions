class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string common = "";
        char letter ;
        if(strs.size() == 1){
            return strs[0];
        }
        for (int i=0; i<strs[0].size(); i++){
            for(int j=1; j<strs.size(); j++){
                if(strs[0][i] == strs[j][i]){
                        letter = strs[0][i];
                }
                else{
                  
                    return common;
                }

            }
            common += letter;

        }
        return common;
    }
};