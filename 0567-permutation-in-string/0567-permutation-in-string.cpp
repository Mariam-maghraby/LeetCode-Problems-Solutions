class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int i=0;
        int j=i+s1.size()-1;
        int k=0;
        sort(s1.begin(), s1.end());
        
        while(j<s2.size()){
            bool flag=s1.find(s2[i]) != std::string::npos;
            if (flag) {
                string temp;
                for(int q=i; q<j+1; q++){
                    temp.push_back(s2[q]);
                }
                sort(temp.begin(),temp.end());

                if(temp== s1){
                    return true;
                }
            }
            i++;
            j=i+s1.size()-1;

        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna