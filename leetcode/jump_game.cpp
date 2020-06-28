class Solution {
public:
    bool canJump(vector<int>& nums) {
        int m = nums.size()-1;
        for(int i=m; i>=0; i--)
            if(i+nums[i] >= m)
                m = i;
        
        return m==0;
    }
};
