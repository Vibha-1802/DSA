class Solution {
public:
    int mySqrt(int x) {
      int mid=0;
      int l=0;
      int h=x;
      long s=0;
      if(x==0)
      return 0;
      while(h>=l)
      {
        mid=(long)(l+h)/2;
        s=(long)mid*mid;
        if(s==x) return mid;
        else if(s>x) 
        {
            h=mid-1;
        }
        else if (s<x)
        {
            l=mid+1;
        }
      }
      return h;  
    }
};