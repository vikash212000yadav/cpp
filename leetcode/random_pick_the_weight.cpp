class Solution {
public:
    int n;
    vector<int> vec;
    Solution(vector<int>& w) {
        srand(time(NULL));
        n = w[0];
        for(int i = 1; i < w.size(); i++)
        {
            w[i] += w[i - 1];
            n = w[i];
        }
        vec = w;
    }
    
    int pickIndex() {
        return upper_bound(vec.begin(), vec.end(), rand() % vec.back()) - vec.begin();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
