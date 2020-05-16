class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int, int> m;
        int zero=0, one=0, result=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i])
                one++;
            else 
                zero++;

            if(zero == one) 
                result = max(result, i+1);
            
            if(m.find(one-zero) == m.end()) 
                m[one-zero] = i;        
            else 
                result = max(result, i-m[one-zero]);
        }
        return result;
    }
};
