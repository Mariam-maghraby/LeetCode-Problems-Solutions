class Solution {
    public boolean isPalindrome(String s) {
        boolean res = false;
        String string = s.replaceAll("[^a-zA-Z0-9]+", "").toLowerCase();
        int len = string.length();
        if(len == 0){
            return true;
        }
        int maxPtr  = len/2;
        for(int i=0; i<maxPtr; i++){

            if(string.charAt(i) != string.charAt(len-i-1)){
                return false;
            }
        }
        res = true;
        return res;
    }
}