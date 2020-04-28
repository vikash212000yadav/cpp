class Solution {
public:
    int myAtoi(string str) {
        int i = 0;
        while(str[i] == ' ')
            i++;
        if(i == str.length())
        {
            return 0;
        }
        while(str[i] != '+' && str[i] != '-' && (str[i] > '9' || str[i] < '0') && i < str.size()) 
        {
            if(str[i] < '0' && str[i] > ' ' || str[i] > '9' && str[i] <= '~')
            {
                return 0;
            }
            i++;
        }
        if(i == str.length())
        {
            return 0;
        }
        bool n = false, m = false;
        if(str[i] == '-') 
        {
            n = true;
            m = true;
        }
        else if(str[i] == '+') 
        {
            n == false;
            m = true;
        }
        if(m)
        {
            i++;
        }
        if(i == str.length()) 
        {
            return 0;
        }
        long int num = 0;
        if(str[i] >= '0' && str[i] <= '9') 
        {
            while(str[i] >= '0' && str[i] <= '9' && i < str.length()) 
            {
                num = (num * 10) + (str[i] - '0');
                long int x = (n) ? -num : num;
                if(x >= INT_MAX)    
                {
                    return INT_MAX;
                }
                if(x <= INT_MIN)    
                {
                    return INT_MIN;
                }
                i++;
            }
        }
        else
        {
            return 0;
        }
        long int x = (n) ? -num : num;
        return x;
    }
};
