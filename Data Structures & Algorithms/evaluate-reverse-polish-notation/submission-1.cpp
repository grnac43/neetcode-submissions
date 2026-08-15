class Solution {
    bool isOp(string s){
        return s == "+" || s == "-" || s == "*" || s == "/";
    }
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> sstack;

        for(int i = 0; i < tokens.size(); i++){
            if(!isOp(tokens[i])){
                sstack.push(stoi(tokens[i]));
            }
            else{
                int a = sstack.top();
                sstack.pop();
                int b = sstack.top();
                sstack.pop();
                if(tokens[i] == "+")
                    sstack.push(a+b);
                else if(tokens[i] == "-")
                    sstack.push(b-a);
                else if(tokens[i] == "*")
                    sstack.push(a*b);
                else if(tokens[i] == "/")
                    sstack.push(b/a);
            }
        }

        return sstack.top();
    }
};
