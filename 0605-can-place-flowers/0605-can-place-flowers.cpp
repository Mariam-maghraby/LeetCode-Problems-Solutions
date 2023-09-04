class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
       if(n == 0){
            return true;
        }
        if(flowerbed.size() == 1){
            if(flowerbed[0] == 0){
                return true;
            }
            return false;
        }

        if(flowerbed[0] == flowerbed[1]){
            flowerbed[0] = 1;
            n--;
            if(n == 0){
            return true;
        }
        }

        if(flowerbed[flowerbed.size()-1] == flowerbed[flowerbed.size()-2]){
            flowerbed[flowerbed.size()-1] = 1;
            n--;
            if(n == 0){
            return true;
        }
        }

        int i, j, k;
        i = 1;

        while(i < flowerbed.size()){
            j = i-1;
            k = i+1;
            if(n == 0){
                break;
            }
            if(flowerbed[j] == flowerbed[i] && flowerbed[i] == flowerbed[k]){
                flowerbed[i] = 1;
                n--;
            }
            i++;
        }
        return (n == 0);
    }
        
    
};