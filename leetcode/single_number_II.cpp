class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int p = 0; 
        int m, sum=0; 
          
        for(int i = 0; i < 32; i++)
        { 
            m = (1 << i); 
            sum = 0; 
            for(int j = 0; j < nums.size(); j++) 
                if((nums[j] & m) != 0) 
                    sum++; 
            
            if ((sum % 3) != 0) 
                p = p|m; 
        } 
        return p; 
    }
};
