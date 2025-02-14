class Solution {
public:
    int minimumMoves(string s) {
        long moves = 0;
        int i=0;
            while(i<s.size()){
                if(s[i] == 'X'){
                    moves++;
                    i+=3;
                }else{
                    i+=1;
                }
            }
        return moves;
    }
};