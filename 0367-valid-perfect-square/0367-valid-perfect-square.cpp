class Solution {
public:
    bool isPerfectSquare(int num) {
        for(int i=0; i<46341; i++){
            if(i*i == num){
                return true; 
            }
        }
        return false;
    }
};