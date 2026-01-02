class Solution {
public:
    int romanToInt(string s) {
        int r=s.length();
        unordered_map<char,int> map;
        map['I']=1;
        map['V']=5;
        map['X']=10;
        map['L']=50;
        map['C']=100;
        map['D']=500;
        map['M']=1000;
        int n=0;
        int c=0;
        int p=0;
        for(int i=r-1;i>=0;i--)
        {
           c=map[s[i]];
           if(c<p)
           {
           c=p-c;
           n-=p;
           }
           n=n+c;
           p=c;
        }
        return n;
    }
};