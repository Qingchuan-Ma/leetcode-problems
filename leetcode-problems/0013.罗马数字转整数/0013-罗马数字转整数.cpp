class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        for(string::iterator it=s.begin(); it!=s.end(); ++it)
        {
            if(*it=='M') res += 1000;
            if(*it=='D') res += 500;
            if(*it=='C')
            {
                if(*(it+1)=='D') res += 400;
                else if(*(it+1)=='M') res += 900;
                else
                {
                    res+=100;
                    continue;
                }
                it++;
            }
            if(*it=='L') res += 50;
            if(*it=='X')
            {
                if(*(it+1)=='L') res += 40;
                else if(*(it+1)=='C') res += 90;
                else
                {
                    res += 10;
                    continue;
                }
                it++;
            }
            if(*it=='V') res += 5;
            if(*it=='I')
            {
                if(*(it+1)=='V') res += 4;
                else if(*(it+1)=='X') res += 9;
                else
                {
                    res += 1;
                    continue;
                }
                it++;
            }
        }
        return res;
    }
};