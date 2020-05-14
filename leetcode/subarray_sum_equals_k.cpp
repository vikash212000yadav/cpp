class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> sum;
        int count=0;
        int csum=0;
        for(int i=0; i<nums.size(); i++)
        {
            csum = csum+nums[i];
            if(csum==k)
                count++;
            
            if(sum.find(csum - k) != sum.end())
                count = count+(sum[csum-k]);
            
            sum[csum]++;
        }
        return count;
    }
};
