class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        if(piles.size() >= h){
            return *max_element(piles.begin(), piles.end());
        }
        int l=1;
        int r=*max_element(piles.begin(), piles.end());
        while(l<r){
            int sum=0;
            int m = (r+l)/2;
            for(int i=0; i<piles.size(); i++){
                sum+=piles[i]/m + (piles[i]%m > 0);
            }
                if(sum>h){
                    l=m+1;
                }else{
                    r=m;

                }
        }
        return r;

    }
};