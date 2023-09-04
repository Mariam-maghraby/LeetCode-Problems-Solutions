class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
       if(n == 0){
            return true;
        }
        flowerbed.insert(flowerbed.begin(), 0);
        flowerbed.push_back(0);
        int i, j, k;
        i = 1;

        while(i < flowerbed.size()){
            j = i-1;
            k = i+1;
            if(n == 0){
                break;
            }
            if(k < flowerbed.size() && flowerbed[j] == flowerbed[i] && flowerbed[i] == flowerbed[k]){
                flowerbed[i] = 1;
                n--;
            }
            i++;
        }
        return (n == 0);
    }
};