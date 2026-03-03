class Solution {
public:
    int minSwaps(string s) {
        map<char, char> mp ={{'[', ']'}};
        stack<char> st;
        st.push(s[0]);
        for(int i=1; i<s.size(); i++){
            if(!st.empty() && s[i] == mp[st.top()]){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        int sz = st.size();
        int miss_match = sz/2;
        if(l%2 !=0 && l>1){
            l--;
        }
        return l;
    }
};