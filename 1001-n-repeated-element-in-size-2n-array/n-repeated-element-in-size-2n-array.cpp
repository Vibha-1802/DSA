class Solution {
public:
    //test
    int repeatedNTimes(vector<int>& nums) {
      unordered_map<int,int> Map;
      int ans;
      int i,d;
      for(i=0;i<nums.size();i++)
      {
        if(Map.contains(nums[i]))
        {
          ans=nums[i] ;
          break;
        }
        Map.insert({nums[i],i});
    }
    return ans;
    }
};