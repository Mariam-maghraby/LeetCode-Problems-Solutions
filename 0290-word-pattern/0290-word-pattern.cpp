class Solution {
public:
    bool wordPattern(string pattern, string s) {
        string word;
        vector<string> words;
        stringstream ss(s);
        while (getline(ss, word, ' ')) {
            words.push_back(word);
        }
        if(words.size() != pattern.size()){
            return false;
        }
        map<string, char> sc;
        map<char, string>cs;

        for(int i=0; i<pattern.size(); i++){

            if((sc.find(words[i]) != sc.end() && sc[words[i]] != pattern[i]) || (cs.find(pattern[i]) != cs.end() && cs[pattern[i]] != words[i])){
                return false;
            }

            sc[words[i]] = pattern[i];
            cs[pattern[i]] = words[i];
        }
        return true;
    }
};