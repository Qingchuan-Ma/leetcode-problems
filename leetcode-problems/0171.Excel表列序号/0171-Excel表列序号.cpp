class Solution {
public:
    int titleToNumber(string s) {
        int n = s.size();
        int i = 1;
        int res = 0;
        for(string::iterator it=s.begin(); it!=s.end(); ++it)
        {
            res += (int(*it-'A')+1)*pow(26, n-i);
            i++;
        }
        return res;
    }
};