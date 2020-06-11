class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> m;
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
        }
        int j=0;
        for(auto i=m.begin(); i!=m.end(); i++)
        {
            while(i->second--)
                nums[j++]=i->first;
        }
    }
};
