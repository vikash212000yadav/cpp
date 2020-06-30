class Solution {
public:
    bool isHappy(int n) {
        set<int> s;
        while(1)
        {
            int sum = 0;
            while(n != 0)
            {
                int rem = n%10;
                sum = sum + pow(rem, 2);
                n = n/10;
            }
            if(sum==1)
                return 1;
            if(s.find(sum)==s.end())
                s.insert(sum);
            else
                return 0;
            n=sum;
        }
        return 0;
    }
};
