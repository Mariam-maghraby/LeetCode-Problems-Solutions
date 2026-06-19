class Solution {
public:
    char findTheDifference(string s, string t) {
        int sumT = std::accumulate(t.begin(), t.end(), 0);
        int sumS = std::accumulate(s.begin(), s.end(), 0);
        return static_cast<char>(sumT-sumS);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna