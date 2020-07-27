class Solution {
public:
    int findMin(vector<int>& nums) {
        int i = 0, j = 0, s = nums.size() - 1;
        while(i < s) 
        {
            j = i + (s - i) / 2;           
            if (nums[j] > nums[s]) 
                i = j + 1;
            else if (nums[j] < nums[s]) 
                s = j;
            else 
                s--;
        }
        return nums[i];
    }
};
