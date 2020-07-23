class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> v;
        unordered_map<int,int> m;
        for(int x:nums) 
            m[x]++;
        
        for(auto p:m) 
            if(p.second == 1) 
                v.push_back(p.first);
        return v;
    }
};
