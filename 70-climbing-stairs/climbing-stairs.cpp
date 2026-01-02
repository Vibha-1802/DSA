class Solution {
public:
    int climbStairs(int n) {
        int one=1,two=1,a;
        if (n==1) return 1;
        for(int i=0;i<n-1;i++)
        {
            a=one+two;
            two=one;
            one=a;
        }
        return a;
    }
};