class Solution {
    public int countPalindromicSubsequence(String s) {
         int count=0;
        Set<Character> set = new HashSet<>();
        Set<Character> setAdded = new HashSet<>();
        List<Character> characterList = new ArrayList<>();
        int[] first= new int[26];
        int[] last= new int[26];
        Arrays.fill(first, s.length());

        for(int i=0; i<s.length(); i++){
            first[s.charAt(i)-'a'] = Math.min(i, first[s.charAt(i)-'a']);
            last[s.charAt(i)-'a'] = i;
        }
        for(int i=0; i<26; i++){
            if(first[i]<last[i]){
                for (int j = first[i] + 1; j < last[i]; j++) {
                    set.add(s.charAt(j));
                }
                characterList.addAll(set);
                set.clear();
            } 
            
        }
        return characterList.size();
        
    }
}