class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> outerSet(numRows);
       outerSet = {{1}};

       for(int i=1; i<numRows; i++){
           vector<int> innerSet(i+1);
           innerSet[0] = 1;
           innerSet[i] = 1;
           outerSet.push_back(innerSet);
           for(int j=1; j<i; j++){
               outerSet[i][j] = outerSet[i-1][j-1]+ outerSet[i-1][j];
            }
       }
       return outerSet;
        
    }
};