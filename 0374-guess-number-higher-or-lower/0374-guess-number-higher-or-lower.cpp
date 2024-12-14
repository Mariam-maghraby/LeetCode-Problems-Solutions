/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int getElm(int l, int r){
        int m = l + (r - l) / 2;
        int res = guess(m);
        while(true){
            if(res==0){
                return m;
            }else{
                if(res == 1){
                    l=m+1;
                    getElm(l, r);
                }else{
                    r=m-1;
                    getElm(l, r);
                }
            }
        }
        return m;
    }
    int guessNumber(int n) {
        int l=1;
        int r=n;
        int m = l + (r - l) / 2;
        int res = guess(m);
        while(true){
            if(res==0){
                return m;
            }else{
                if(res == 1){
                    l=m+1;
                }else{
                    r=m-1;
                }
            }
        }
         
        return m;
    }
};