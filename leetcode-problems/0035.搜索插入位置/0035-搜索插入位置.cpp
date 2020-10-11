class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(vector<int>::iterator it=nums.begin(); it!=nums.end(); ++it)
        {
            if(*it>=target)
            {
                return distance(nums.begin(), it);
            }
        }
        return nums.size();
    }
};