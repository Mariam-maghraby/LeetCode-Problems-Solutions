class Solution {
public:
    int lengthOfLastWord(string s) {

        int size = s.size();


        if(s[s.size()-1] == ' '){
            size --;
        }

        for(int i=s.size()-2; i>=0; i--){
            if(s[i] == ' ' && s[i+1] == ' '){
                size --;
            }
            
            if(s[i] == ' ' && s[i+1] != ' '){
                size = size - i - 1;
                break;
            }
            
            
        
        }

       return size; 
    }
};