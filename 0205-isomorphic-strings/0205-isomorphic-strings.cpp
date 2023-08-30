class Solution {
public:
    bool isIsomorphic(string s, string t) {
       map<char, char> sMap;
            map<char, char> tMap;
            int i=0;
            while(i<s.length()){
                if (sMap.count(s[i]) > 0 || tMap.count(t[i]) > 0){
                    if(sMap[s[i]] != t[i] || tMap[t[i]] != s[i] ){
                        return false;
                    }
                    else {
                        i++;
                    }
                }
                else {
                    sMap[s[i]] = t[i];
                    tMap[t[i]] = s[i];
                    i++;
                }
            }

        return true;
    }
};