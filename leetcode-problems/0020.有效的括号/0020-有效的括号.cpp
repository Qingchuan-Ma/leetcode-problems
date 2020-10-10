class Solution {
public:
    bool isValid(string s) {
        if(s == "") return true;
        stack<char> brackets;
        for(string::iterator it=s.begin(); it!=s.end(); ++it)
        {
            if(*it=='(') brackets.push('(');
            else if(*it=='[') brackets.push('[');
            else if(*it=='{') brackets.push('{');
            else
            {
                if(brackets.empty()) return false;
                if(*it==')')
                {
                    if(brackets.top()!='(') return false;
                    else brackets.pop();
                }
                else if(*it==']')
                {
                    if(brackets.top()!='[') return false;
                    else brackets.pop();
                }
                else if(*it=='}')
                {
                    if(brackets.top()!='{') return false;
                    else brackets.pop();
                }
            }
        }
        if(!brackets.empty()) return false;
        return true;
    }
};