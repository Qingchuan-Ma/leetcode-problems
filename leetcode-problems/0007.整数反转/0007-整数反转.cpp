class Solution {
public:
    int reverse(int x) {
        int temp = x;
        vector<int> nums;
        int i = 0;
        while(temp)
        {
            nums.push_back(temp%10);
            temp /= 10;
            i++;
        }
        long res = 0;
        for(vector<int>::iterator it=nums.begin(); it!=nums.end(); ++it)
        {
            i--; 
            //try
            //{
                res += *it*pow(10,i);  //C++中溢出并不会报错所以 try catch 没用
            //}
            //catch(...)
            //{
            //    return 0;
            //}
        }
        //if(x<0) res = -res;
        return res>INT_MAX || res<INT_MIN ? 0:res;
    }
};