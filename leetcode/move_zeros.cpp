class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeros=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==0)
                zeros++;
        }
        vector<int> result;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] != 0)
                result.push_back(nums[i]);
        }
        
        while(zeros--)
        {
            result.push_back(0);
        }
        for(int i=0; i<nums.size(); i++)
        {
            nums[i]=result[i];
        }
        
    }
};
