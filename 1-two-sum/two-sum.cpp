#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    //test
    vector<int> twoSum(vector<int> &nums,int target) {
      unordered_map<int,int> Map;
      vector<int> ans;
      int i,d;
      for(i = 0; i < nums.size(); i++)
      {
        d=target-nums[i];
        if(Map.contains(d))
        {
          ans.push_back(Map.at(d));
          ans.push_back(i);
          break;
        }
        Map.insert({nums[i],i});
    }
    return ans;
    }
};