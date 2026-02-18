class Solution {
public:
    bool hasAlternatingBits(int n) { 
        string binary;
        int i=0;
        char prev;
        while(n>0) {
          binary=char('0'+(n&1))+binary;
          n >>= 1;
        }
        for(int i=0;i<binary.length()-1;i++)
        {
            if(binary[i]==binary[i+1])
            return false;
        }
        return true;
    }
};