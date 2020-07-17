class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> v;
        map<int,int> m;
        
        for(int i=0; i<nums.size(); i++)
            m[nums[i]]++;

        priority_queue<pair<int,int>> q;
        
        for(auto i:m)
            q.push({i.second, i.first});
        
        for(int i=1; i<=k; i++)
        {
            v.push_back(q.top().second);
            q.pop();
        }

        return v;
    }
};
