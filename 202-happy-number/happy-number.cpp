class Solution {
public:
    bool isHappy(int n) {
        int r;
        unordered_set<int> seen;
        while(true)
        {
           r=0;
           seen.insert(n);
           while(n!=0)
           {
            r=r+pow(n%10,2);
            n/=10;
           }
           if(r==1)
           return true;
           else if(seen.contains(r))
           return false;
           else
           n=r;
        }
    }
};