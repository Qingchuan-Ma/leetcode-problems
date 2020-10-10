class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size()==0) return 0;
        vector<int>::iterator slow=nums.begin();
        vector<int>::iterator fast=nums.begin();
        while(fast<nums.end())
        {
            if(*slow==*fast)
            {
                fast++;
            }
            else
            {
                *(++slow)=*fast;
                fast++;
            }
        }
        return std::distance(nums.begin(),++slow);
    }
};