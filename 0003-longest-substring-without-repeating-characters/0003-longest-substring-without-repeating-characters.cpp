class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty()){
            return 0;
        }
        int cnt=0;
        map<char, int>mp ={{s[0], 0}};
        int mx = 1;
        int i=0;
        int j=1;

        while(j<s.size() && i<s.size()){
            if(s[i]!=s[j] && !mp.count(s[j]) ){
                int k=i+1;
                while (k<j+1) {
                    mp.insert({s[k], k});
                    k++;
                }
                cnt=mp.size();
                mx= max(cnt, mx);
                j++;
            }else{
                if (j==i) {
                    j++;
                }else {
                   i=mp[s[j]]+1 ;
                    mp.clear();
                    mp.insert({s[i], i});
                }

            }
        }
        return mx;
    }
};