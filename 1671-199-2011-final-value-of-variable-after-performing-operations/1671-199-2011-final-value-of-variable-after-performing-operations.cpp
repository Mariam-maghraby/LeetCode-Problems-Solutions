class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x= 0;
        for(int i=0; i<operations.size(); i++){
            if(operations[i].contains("++")){
                x++;
            }else{
                x--;
            }
        }
        return x;
    }
};