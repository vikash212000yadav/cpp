class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0)
            return false;
        if(n==1)
            return true;
        
        if(fmod((log10(n)/log10(3)),1) == 0)
            return true;
        
        return false;
    }
};
