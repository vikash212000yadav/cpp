class Solution {
public:
    double angleClock(int hour, int minutes) {
        if(hour == 12)
           hour=0;
        
        float d1 = minutes*6.0;
        float d2 = hour*30.0 + minutes*0.5;
        float d= abs(d1 - d2);
        
        if(d > 180)
            d = 360-d;
        
        return d;
    }
};
