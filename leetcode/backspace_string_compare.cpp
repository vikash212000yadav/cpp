class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> ch1;
        stack<char> ch2;
        for(int i=0; i<S.length(); i++)
        {
            if(S[i]!='#')
                ch1.push(S[i]);
            else if(S[i]=='#' && ch1.empty())
            {
                
            }
            else
                ch1.pop();
        }
        for(int i=0; i<T.length(); i++)
        {
            if(T[i]!='#')
                ch2.push(T[i]);
            else if(T[i]=='#' && ch2.empty())
            {
                
            }
            else
                ch2.pop();
        }
  
        if (ch1.size() != ch2.size()) 
        { 
            return false; 
        } 
  
        while(ch1.empty() == false) 
        { 
            if(ch1.top() == ch2.top()) 
            { 
                ch1.pop(); 
                ch2.pop(); 
            }
            else 
                return false; 
        }
        return true; 
    }
};
