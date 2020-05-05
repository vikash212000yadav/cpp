class Solution {
public:
    bool isValid(string s) {
        stack <char> ch;
        
        for(int i=0; i<s.size(); i++)
        {
            if((s[i]==')' || s[i]=='}' || s[i]==']') && ch.empty()==true)
                return false;
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                ch.push(s[i]);
                continue;
            }
            
            if((s[i]==')' && ch.top()=='(') || (s[i]==']' && ch.top()=='[') || (s[i]=='}' && ch.top()=='{'))
                ch.pop();
            else
                return false;
            
            
        }
        if(ch.empty()==true)
            return true;
        return false;
    }
};
