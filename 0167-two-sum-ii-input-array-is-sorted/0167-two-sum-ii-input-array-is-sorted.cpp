class Solution {
public:
  vector<int> twoSum(vector<int>& numbers, int target) {
        int r = numbers.size()-1;
        int l = 0;
        while(r<numbers.size()){
            if(numbers[r] + numbers[l] == target){
                return {++l, ++r};
            }
            else{
                if(numbers[r] + numbers[l] > target){
                    r--;
                }else{
                    l++;
                }
            }
        }
        return {};
    }
};