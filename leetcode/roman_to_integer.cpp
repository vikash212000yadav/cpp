class Solution {
public:
    int romanToInt(string s) {
        int i=0;
        int result =0;
        while(i<s.length())
        {
            switch(s[i])
            {
                case 'M':
                    result=result+1000;
                    break;
                case 'D':
                    result=result+500;
                    break;
                case 'C':
                    if(s[i+1]=='D')
                    {
                        result=result+400;
                        i++;
                        break;
                    }
                    if(s[i+1]=='M')
                    {
                        result=result+900;
                        i++;
                        break;
                    }
                    result=result+100;
                    break;
                case 'L':
                    result=result+50;
                    break;
                case 'X':                
                    if(s[i+1]=='L')
                    {
                        result=result+40;
                        i++;
                        break;
                    }
                    if(s[i+1]=='C')
                    {
                        result=result+90;
                        i++;
                        break;
                    }
                    result=result+10;
                    break;
                case 'V':
                    result=result+5;
                    break;
                case 'I':                
                    if(s[i+1]=='V')
                    {
                        result=result+4;
                        i++;
                        break;
                    }
                    if(s[i+1]=='X')
                    {
                        result=result+9;
                        i++;
                        break;
                    }
                    result=result+1;
                    break;
                default:
                    return 0;
            }
            i++;            
        }
        return result;
    }
};
