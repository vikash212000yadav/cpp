class Solution {
public:
    bool checkValidString(string s) {
       
        int a=0,b=0;
        for(int i=0;i<s.length();i++) 
        {
            if(s[i]=='(')
            {
                a++;
                b++;
            }
            else if(s[i] == '*') 
            {
                a--;
                b++;
            }
            else 
            {
                a--;
                b--;
                if(b<0) 
                    break;
            }
            if(a<0) 
                a=0;
        }
        if(a==0)
            return true;
        return false;
    }
};
