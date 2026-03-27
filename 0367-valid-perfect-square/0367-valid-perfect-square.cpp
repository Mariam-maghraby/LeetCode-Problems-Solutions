class Solution {
public:
    bool isPerfectSquare(int num) {
        map<long, int>mp;
        for(int i=0; i<46341; i++){
            mp[i*i] = i;
        }
        if(mp[num]) return true;
        return false;
    }
};