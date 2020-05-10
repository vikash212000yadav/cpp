class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int x = 0;
        while ((m|x) < n)
            x = (x<<1) | 1;

        return m & ~x;
    }
};
