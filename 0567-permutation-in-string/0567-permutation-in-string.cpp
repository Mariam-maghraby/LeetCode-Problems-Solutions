class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char, int>mp1;
        map<char, int>mp2;
        for(int i=0; i<s1.size();i++){
            mp1[s1[i]]+=1;
        }
        int k=0;
        while(k<s2.size()){
            for(int j=0; j<s1.size() && k+j <s2.size();j++){
                mp2[s2[k+j]]++;
            }
            if(mp1 == mp2){
                return true;
            }else{
                mp2.clear();
            }
            k++;
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna