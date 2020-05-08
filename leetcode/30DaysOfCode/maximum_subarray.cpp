class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums.front();

	    for (int i = 1; i < nums.size(); ++i)
	    {
		    if (nums[i - 1] >= 0)
			    nums[i] = nums[i] + nums[i - 1];

		    if (nums[i] > ans)
			    ans = nums[i];
	    }

	    return ans;
    }
};
