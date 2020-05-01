class Solution {
public:
    bool isPerfectSquare(int num) {
        /*
        vector<int> v;
        if(num==1)
            return true;
        for(int i = 1; i <= num/2; i++)
        {
            if(num % i == 0)
                v.push_back(i);
        }
        if(v.size()%2==0)
            return true;
        return false;
        */
        unsigned int i=1;
        unsigned long int j=i*i;
        for (i = 1; j <= num; i++) 
        {   
            if ((num % i == 0) && (num / i == i)) 
            { 
                return true; 
            } 
            j=i*i;
        } 
        return false; 
    }
};
