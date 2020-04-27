class Solution {
public:
    int reverse(int x) {
        int rem;
        int rev=0; 
        
        long int a=0;
        while(x!=0)
        {
            rem = x%10;
            a=rev;
            
            if (a*10 > INT_MAX || a*10 < INT_MIN) 
            { 
                return 0; 
            }
            rev = rev*10 + rem;
            
            x=x/10;
        }
        return rev;
    }
};
