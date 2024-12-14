class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res = {};
        for(int i=0; i<nums.size(); i++){
            if(i>0 && nums[i] == nums[i-1])
                continue;

            int l = i+1;
            int r = nums.size()-1 ;
            while(r>l){
                if(nums[l]+nums[i]+nums[r] == 0){
                    vector<int> vec = {nums[l],nums[i],nums[r]};
                    res.push_back(vec);

                    int lVal = nums[l];
                    int rVal = nums[r];
                    while(r>l && rVal== nums[r]){
                            r--;
                        }
                    while(r>l && lVal == nums[l]){
                        l++;
                    }


                }else{
                    if(nums[l]+nums[i]+nums[r] > 0){
                        r--;
                    }
                    else{
                        l++;
                    }
                }
            }

        }

        return res;

    }
};