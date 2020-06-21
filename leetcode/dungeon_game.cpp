class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int r = dungeon.size();   
        if(dungeon.size() == 0) 
            return 0; 
        int m = dungeon[0].size(); 
		
        vector<vector<int>>v(dungeon.size()+1, vector<int>(m+1, INT_MAX));
		
        v[dungeon.size()-1][m] = 1;
        v[dungeon.size()][m-1] = 1;
		
        for(int i=dungeon.size()-1; i>=0; i--)
        {
            for(int j=m-1; j>=0; j--)
            {
                int n = min(v[i+1][j], v[i][j+1]) - dungeon[i][j]; 
                v[i][j] = max(1,n);
            }
        }
        
        return v[0][0]; 
    }
};
