class Solution {
public:
    int lengthOfLastWord(string s) {
        bool existspace = false;
        for(string::reverse_iterator rit=s.rbegin(); rit!=s.rend(); ++rit)
        {
            if(*rit==' ') s.pop_back();
            else break;
        }
        for(string::reverse_iterator rit=s.rbegin(); rit!=s.rend(); ++rit)
        {
            if(*rit==' ') return distance(s.rbegin(), rit);
            else existspace=false;
            
        }
        if(!existspace) return s.size();
        return 0;
    }
};