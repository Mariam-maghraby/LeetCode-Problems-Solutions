class Solution {
public:
    bool isPerfectSquare(int num) {
    vector<long>mp;
        for(int i=0; i<46341; i++){
            mp.push_back(i*i);
        }
        auto it = find(mp.begin(), mp.end(), num);
        if(it != mp.end()) return true;
        return false;
    }
};