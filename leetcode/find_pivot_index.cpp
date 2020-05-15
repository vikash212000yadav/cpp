class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        int lsum = 0;
        if(nums.size()==0)
        {
            return -1;
        }
        for(int i=0; i<nums.size(); i++)
        {
            sum += nums[i];
        }
        
        for(int i=0; i<nums.size(); i++)
        {
            if(sum-nums[i] == 2*lsum)
                return i;
            lsum += nums[i];
        }
        return -1;
    }
};
