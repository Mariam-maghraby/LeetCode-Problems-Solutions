class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int op=stoi(tokens[0]);
        stack<int>sk;
        sk.push(stoi(tokens[0]));
        for(int i=1;i<tokens.size();i++){
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                int x = sk.top();
                sk.pop();
                int y = sk.top();
                sk.pop();
                if(tokens[i] == "+"){
                    op=(x+y);
                    sk.push(op);
                }else{
                    if(tokens[i] == "-"){
                        
                        op=(y-x);
                        sk.push(op);
                    
                    }else{
                        if(tokens[i] == "*"){
                    
                            op=(x*y);
                            sk.push(op);
                    
                        }else{
                            if(tokens[i] == "/"){
                                op=(y/x);
                                sk.push(op);
                    
                            }
                        }
                    }
                }
            }else{
                sk.push(stoi(tokens[i]));
            }
        }
        return op;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna