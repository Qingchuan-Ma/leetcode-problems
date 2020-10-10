class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        for(vector<int>::iterator it=nums.begin(); it!=nums.end(); ++it)
        {
            for(vector<int>::iterator ite=it; ite!=nums.end(); ++ite)
            {
                if(it==ite) continue;
                else if(*it+*ite==target)
                {
                    res.push_back(std::distance(nums.begin(), it));
                    res.push_back(std::distance(nums.begin(), ite));
                    break;
                }
            }
            if(!res.empty()) break;
        }
        return res;
    }
};