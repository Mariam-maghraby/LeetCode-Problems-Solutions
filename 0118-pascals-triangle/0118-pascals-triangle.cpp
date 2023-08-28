class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> outerSet;

       for(int i=0; i<numRows; i++){
           vector<int> innerSet(i+1, 1);
           outerSet.push_back(innerSet);
           for(int j=1; j<i; j++){
               outerSet[i][j] = outerSet[i-1][j-1]+ outerSet[i-1][j];
            }
       }
       return outerSet;
        
    }
};