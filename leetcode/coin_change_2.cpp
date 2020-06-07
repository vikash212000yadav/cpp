class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int t[coins.size()+1][amount+1];
        
        for(int i=0;i<=coins.size();i++)
            t[i][0]=1;
        
        for(int i=1;i<=amount;i++)
            t[0][i]=0;
        
        for(int i=1;i<=coins.size();i++)
        {
            for(int j=1;j<=amount;j++)
            {
                if(coins[i-1]<=j)
                    t[i][j]=t[i-1][j]+t[i][j-coins[i-1]];
                else
                    t[i][j]=t[i-1][j];
            }
        }
        return t[coins.size()][amount];
    }
};
