class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> res;
        for(vector<int>::iterator it=A.begin(); it!=A.end(); ++it)
        {
            res.push_back(pow(*it,2));
        }
        sort(res.begin(), res.end());
        return res;
    }
};