class Solution {
public:
    bool isValid(string s) {
        map<char,char> mp = {make_pair( ')', '('), make_pair('}', '{'), make_pair(']', '[') };
        stack<char> sk;
        for(int i=0; i<s.size(); i++){
            sk.push(s[i]);
            if(sk.size()>1){
                char x = sk.top();
                sk.pop();
                if(sk.top() == mp[x]){
                    sk.pop();
                }else{
                    sk.push(x);
                }
            }
        }
        return sk.size() > 0 ? false:true;
    }
};