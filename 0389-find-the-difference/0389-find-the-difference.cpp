class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(t.begin(),t.end());
        sort(s.begin(),s.end());

        int  i=0;
        int  j=0;

        while(i<s.size()){
            if(s[i]== t[j]){
                i++;
                j++;
            }else{
                break;
            }

        }
        return t[i];
    }

};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna