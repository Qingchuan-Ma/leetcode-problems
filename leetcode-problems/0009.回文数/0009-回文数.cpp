class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        vector<int> nums;
        while(x)
        {
            nums.push_back(x%10);
            x /= 10;
        }
        int n = nums.size();
        int i = 0;
        vector<int>::reverse_iterator re_it=nums.rbegin();
        for(vector<int>::iterator it=nums.begin(); it!=nums.end(); ++it)
        {
            if(*it != *(re_it))
            {
                return false;
            }
            re_it++;
        }
        return true;
    }
};