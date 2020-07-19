class Solution {
public:
    string addBinary(string a, string b) {
        int n = a.size()-1;
        int m = b.size()-1;
        int carry = 0;
        int sum = 0;
        string s;
        while(n >= 0 || m >= 0)
        {
            int p, q;
            
            if(n >= 0)
                p = a[n] - '0';
            else
                p = 0;
            
            if(m >= 0)
                q = b[m] - '0';
            else
                q = 0;
            
            sum = p + q + carry;
            carry = 0;
            
            if(sum == 2)
            {
                sum = 0;
                carry = 1;
            }
            
            if(sum == 3)
            {
                sum = 1;
                carry = 1;
            }
            
            s.push_back(sum + '0');
            n--;
            m--;
        }
        
        if(carry != 0)
            s.push_back(carry + '0');

        reverse(s.begin(), s.end());
        return s;
    }
};
