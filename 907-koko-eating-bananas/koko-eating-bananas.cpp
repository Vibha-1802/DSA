class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
      int mid=0;
      int low=1;
      int i=0;
      long sum=0;
      int s=0;
      int high=*max_element(piles.begin(), piles.end());;
      while(high>=low)
      {
        mid=(low+high)/2;
        sum = 0;
        for(i=0;i<piles.size();i++)
        {
          if(piles[i]%mid==0)
            sum=sum+(piles[i]/mid);
          else
            sum=sum+(piles[i]/mid) + 1;
        }
        if(sum>h) 
        {
            low=mid+1;
        }
        else if (sum<=h)
        {
            s=mid;
            high=mid-1;
        }
      }
      return s;  
    }
};