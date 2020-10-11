class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>::iterator it2=nums2.begin();
        for(vector<int>::iterator it=nums1.begin(); it!=nums1.end(); ++it)
        {
            if(distance(nums2.begin(), it2)>=n) break;
            if(distance(nums1.begin(), it)>=m+distance(nums2.begin(),it2))
            {
                nums1.pop_back();
                nums1.insert(it, *it2);
                it2++;
                continue;
            }
            if(*it>*it2)
            {
                nums1.pop_back();
                nums1.insert(it, *it2);
                it2++;
            }
        }
    }
};