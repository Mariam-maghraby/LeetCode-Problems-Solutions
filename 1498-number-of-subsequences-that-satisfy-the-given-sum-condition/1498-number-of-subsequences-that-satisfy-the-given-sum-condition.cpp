class Solution {
public:
    const long long MOD = 1e9 + 7;

    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int i=0;
        int j=nums.size()-1;
        long long res=0;
        while(i<=j){
            if(nums[i]+nums[j] <= target){
                res += pow(2, (j-i));
                i++;
            }else{
                j--;
            }
            
            
        }
        return res%MOD;
    }
};