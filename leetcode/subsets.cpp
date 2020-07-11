class Solution {
public:
    void subset(vector<int> nums, vector <int> v, vector<vector<int>> &vec)
    {
        if (nums.size() == 0)
        {
            vec.push_back(v);
            return;
        }
        
        int n = nums[0];
        nums.erase(nums.begin()+0);
        subset(nums, v, vec);
        v.push_back(n);
        subset(nums, v, vec);
      
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector <int> v;
        vector<vector<int>> vec;
        subset(nums, v, vec);
        return vec;
    }
};
