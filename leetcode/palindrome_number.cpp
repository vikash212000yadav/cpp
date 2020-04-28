class Solution {
public:
    bool isPalindrome(int x) {
        int rem;
        int rev=0;
        int a=x;
        
        long int b=0;
        if(a<0)
            return false;
        while(a!=0)
        {
            rem = a%10;
            b=rev;
            
            if (b*10 > INT_MAX || b*10 < INT_MIN) 
            { 
                return false; 
            }
            
            rev = rev*10 + rem;
            
            a=a/10;
        }
        if(x!=rev)
        {
            return false;
        }
        return true;
    }
};
