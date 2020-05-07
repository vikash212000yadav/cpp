class Solution {
public:
    int longestValidParentheses(string s) {

        //int n = s.length();
        
        stack<int> ch;
        int result = 0;
        
        for (int i = 0; i < s.size(); i++) 
        {
            if (!ch.empty() && s[ch.top()] == '(' && s[i] == ')') 
            {
                ch.pop();
                if(ch.empty()==true)
                {
                    result=max(result, i+1);
                }
                else
                {
                    result=max(result, i-ch.top());
                }
            } 
            else 
            {
                ch.push(i);
            }
        }
        
        //int count=0, result=0;;
        /*
        
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==')' && ch.empty()==true)
            {
                ch.push(s[i]);
                continue;
            }
            
            if(s[i]==')' && ch.top()=='(')
            {
                ch.pop();
                count+=2;
            }
            else
                ch.push(s[i]);
            if((ch.empty()==true || i==s.size()-1) && result<count)
            {
                result=count;
                count=0;
            }
            
        }
        */        
        return result;
    }
};
