class Solution {
public:
    int hammingDistance(int x, int y) {
        int result = x ^ y;
        int n = 0;
        while(result > 0)
        {
            n = n + (result & 1);
            result = result>>1;
        }
        return n;
    }
};
