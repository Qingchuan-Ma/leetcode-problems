class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int c = 0;
        for(vector<int>::reverse_iterator it=digits.rbegin(); it!=digits.rend(); ++it)
        {
            if(*it+1==10)
            {
                *it = 0;
                c = 1;
            }
            else
            {
                c = 0;
                *it += 1;
            }
            if(c==0) break;
        }
        if(c==1) digits.insert(digits.begin(), 1);
        return digits;
    }
};