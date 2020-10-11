class Solution {
public:
    int mySqrt(int x) {
        int res=0;
        for(long i=0; i<=x; i++)
        {
            long temp1 = i*i;
            long temp2 = (i+1)*(i+1);
            if(x>=temp1 && x<temp2)
            {
                res = i;
                break;
            }
        }
        return res;
    }
};