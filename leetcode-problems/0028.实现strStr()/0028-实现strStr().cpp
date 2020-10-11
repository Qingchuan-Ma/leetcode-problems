class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle==haystack) return 0;
        if(needle.size()>haystack.size()) return -1;
        if(haystack=="") return -1;
        int n=needle.size();
        for(int i = 0; i<haystack.size(); ++i)
        {
            if(haystack.substr(i, n)==needle)
            {
                return i;
            }
        }
        return -1;
    }
};