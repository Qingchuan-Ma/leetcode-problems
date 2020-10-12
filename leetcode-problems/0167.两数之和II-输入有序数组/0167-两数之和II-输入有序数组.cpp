class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        for(vector<int>::iterator it=numbers.begin(); it!=numbers.end()-1; ++it)
        {
            if(*it>target) break;
            if(*it==*(it+1)&&*it+*(it+1)!=target) continue;
            for(vector<int>::iterator it2=it+1; it2!=numbers.end(); ++it2)
            {
                if(*it+*it2>target) break;
                if(*it+*it2==target) 
                {
                    res.push_back(distance(numbers.begin(), it)+1);
                    res.push_back(distance(numbers.begin(), it2)+1);
                    return res;
                }
            }
        }
        return res;
    }
};