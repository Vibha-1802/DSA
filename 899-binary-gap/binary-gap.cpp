class Solution {
public:
    int binaryGap(int n) {
        int prev=-1;
        int count=0;
        int curr=0;
        while(n>0)
        {
            if((n&1)>0) {
                count=(prev!=-1)?max(count,curr-prev):count;
                prev=curr;
            }
            curr++;
            n>>=1;
        }
        return count;
    }
};