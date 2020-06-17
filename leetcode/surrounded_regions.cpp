class Solution {
public:
    void solve(vector<vector<char>>& board) {
        if (board.size() == 0 || board[0].size() == 0) 
            return ;
        int n = board.size(), m = board[0].size();
        queue<pair<int, int>> q;
        vector<vector<bool>> v(n, vector<bool>(m, false));

        for (int i = 0; i < n; ++i) 
        {
            for (int j = 0; j < m; ++j) 
            {
                if (i != 0 && i != n - 1 && j != 0 && j != m - 1) 
                    continue;
                if (board[i][j] == 'O') 
                {
                    v[i][j] = true;
                    q.push(make_pair(i, j));
                }
            }
        }
		
        while (!q.empty()) 
        {
            auto pr = q.front();
            q.pop();
            for (int i = 0; i < 4; ++i) 
            {
                int a = pr.first + x[i], b = pr.second + y[i];
                if (a >= 0 && a < n && b >= 0 && b < m && board[a][b] == 'O' && !v[a][b]) 
                {
                    v[a][b] = true;
                    q.push(make_pair(a, b));
                }
            }
        }
		
        for (int i = 1; i < n - 1; ++i) {
            for (int j = 1; j < m - 1; ++j) {
                if (board[i][j] == 'O' && !v[i][j]) board[i][j] = 'X';
            }
        }
    }
private:
    int x[4] = {1, 0, -1, 0}, y[4] = {0, 1, 0, -1};
};
