class Solution {
public:
    int removeElement(vector<int>& nums, int val) {        
        int n =0;
        for(int i=0; i<nums.size() ;i++)
        {
            if(nums[i] != val)
                n++;
        }
        int t = n;
        for(int i=0; i<n; i++)
        {
            if(nums[i] == val)
            {
                while(nums[t] == val) 
                    t++;
                nums[i] = nums[t] ;
                t++;
            }
        }
        return n;
    }
};
