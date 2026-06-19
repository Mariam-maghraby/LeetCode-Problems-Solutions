class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char, int>mp;
        map<char, int>mp2;
        for(int i=0;i<t.size();i++){
            mp[t[i]]+=1;
        }
        for(int j=0;j<s.size();j++){
            mp2[s[j]]+=1;
        }
        for (auto it = mp.begin(); it != mp.end(); ++it) {
            char character = it->first;
            int countInT = it->second;

            // If the character is missing from 's', or its count doesn't match up
            if (mp2.find(character) == mp2.end() || mp2[character] != countInT) {
                return character;
            }
        }
        return mp.end()->first;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna