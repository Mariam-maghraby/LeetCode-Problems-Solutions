class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
       if(n == 0){
            return true;
        }
        flowerbed.insert(flowerbed.begin(), 0);
        flowerbed.push_back(0);
     
        int i = 1;
        while(i < flowerbed.size()-1){
            
            if(n == 0){
                break;
            }
            if(flowerbed[i-1]+flowerbed[i]+flowerbed[i+1] == 0){
                n--;
                i++;
            }
            i++;
        }
        return (n == 0);
    }
};