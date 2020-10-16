class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> numsMap;
        for(vector<int>::iterator it=nums.begin(); it!=nums.end(); ++it)
        {
            numsMap[*it]++;
        }
        int res;
        int n = nums.size();
        for(map<int, int>::iterator it=numsMap.begin(); it!=numsMap.end(); ++it)
        {
            if(it->second>n/2)
            {
                res = it->first;
                break;
            }
        }
        return res;
    }
};