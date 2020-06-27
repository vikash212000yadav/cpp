class Solution {
public:
    int numSquares(int n) {
        int root = sqrt(n);
	
	    if (root * root == n)
		    return 1;
	
	    for (int i = 1; i * i < n; i++) 
        {
		    int root, j = n - i * i;
		    root = sqrt(j);
		    if (root * root == j)
			    return 2;
	    }
	
	    while (n % 4 == 0)
		    n >>= 2;
	    if (n % 8 == 7)
		    return 4;
	
	    return 3;
    }
};
