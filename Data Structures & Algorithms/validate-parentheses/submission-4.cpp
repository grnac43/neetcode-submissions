class Solution {
public:
    bool isValid(string s) {
        stack<char> sstack;

        for(int i = 0; i < s.size(); i++){
            switch(s[i]){
                case '(':
                case '{':
                case '[':
                    sstack.push(s[i]);
                    break;
                case ')':
                    if(sstack.empty() || sstack.top() != '(')
                        return false;
                    sstack.pop();
                    break;
                case ']':
                    if(sstack.empty() || sstack.top() != '[')
                        return false;
                    sstack.pop();
                    break;
                case '}':
                    if(sstack.empty() || sstack.top() != '{')
                        return false;
                    sstack.pop();
                    break;
            }
        }

        return sstack.empty();
    }
};
