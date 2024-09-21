class Solution {
    public boolean isPalindrome(String s) {
        String string = s.replaceAll("[^a-zA-Z0-9]+", "").toLowerCase();
        int len = string.length();
        StringBuilder stringBuilder = new StringBuilder();
       for(int i=len-1; i>=0; i--){
        stringBuilder.append(string.charAt(i));
       }
        String reversed = stringBuilder.toString();
        return reversed.equals(string);
    }
}