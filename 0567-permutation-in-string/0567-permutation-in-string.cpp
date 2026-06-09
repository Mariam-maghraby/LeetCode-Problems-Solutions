class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k=0;
        // sort(s1.begin(), s1.end());
        while(k<s2.size()){
            if (s1.find(s2[k]) != std::string::npos) {
                string s1Copy = s1;
                if (k+s1.size()<=s2.size()) {
                    string temp1 = s2.substr(k,s1.size());
                    sort(temp1.begin(),temp1.end());
                    sort(s1Copy.begin(),s1Copy.end());
                    if(temp1== s1Copy){
                        return true;
                    }
                }
                if (k - static_cast<int>(s1.size()) + 1 >= 0 ) {
                    string temp2 = s2.substr(k-s1.size()+1, s1.size());
                    sort(temp2.begin(),temp2.end());
                    sort(s1Copy.begin(),s1Copy.end());
                    if(temp2== s1Copy){
                        return true;
                    }
                }
            }
            k++;
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna