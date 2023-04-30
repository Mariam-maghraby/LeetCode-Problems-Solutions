class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> arrCopy(arr.size());
        for(int i=0; i<arr.size(); i++){
            arrCopy[i] = arr[i];
        }
        int maxNo = -1;
        int temp;
        int j;
        for(int i=(arr.size()-2); i>=0; i--){
            j= i+1;
            temp = arrCopy[j];
            maxNo = max(temp, maxNo);
            arr[i] = maxNo;
        }
        arr[arr.size()-1] = -1;
        return arr;
    }
};