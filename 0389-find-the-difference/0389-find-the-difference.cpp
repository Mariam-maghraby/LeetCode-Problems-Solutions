class Solution {
public:
    char findTheDifference(string s, string t) {
        int sumS =0;
        int sumT=0;
        for(int i=0;i<t.size();i++){
            sumT+=static_cast<int>(t[i]);
        }
        for(int i=0;i<s.size();i++){
            sumS+=static_cast<int>(s[i]);
        }
        return static_cast<char>(sumT-sumS);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna