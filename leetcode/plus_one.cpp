class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = 1, m = 0;
        int size = digits.size();
        vector<int> v(digits);
        
        if (digits[size - 1] != 9) 
        {
            v[size - 1] += 1;
            return v;
        }
        for (int i = size - 1; i >= 0; i--) 
        {
            m = n + digits[i];
            n = m / 10;
            v[i] = m % 10;
        }
        if (v[0] == 0) 
        {
            v.push_back(0);
            v[0] = 1;
        }
        return v;
    }
};
