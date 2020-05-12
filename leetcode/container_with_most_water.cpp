class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=INT_MIN;
        int i=0, j=height.size()-1;
        while(i<j)
        {
            area=max(area, (j-i)*min(height[i], height[j]));
            if(height[i]<height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return area;
        /*
        int area=0, max_area=0;
        for(int i=0; i<height.size(); i++)
        {
            for(int j=i+1; j<height.size(); j++)
            {
                if(height[i]<height[j])
                {
                    area=height[i] * (j-i);
                    if(max_area<area)
                        max_area=area;
                }
                else
                {
                    area=height[j] * (j-i);
                    if(max_area<area)
                        max_area=area;
                }
            }
        }
        return max_area;
        */
    }
};
