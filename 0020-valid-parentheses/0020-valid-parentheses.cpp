class Solution {
public:
    bool isValid(string s) {
        map<char, char> mp = {{'(', ')'}, {'{', '}'}, {'[', ']'}};
        stack<char> st;
        for(int i=0; i<s.size(); i++){
            if(!st.empty() && s[i] == mp[st.top()]){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        return st.empty();
    }
};