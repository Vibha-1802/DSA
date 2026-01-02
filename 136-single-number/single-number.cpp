#include <iostream>
#include <vector>
#include <algorithm> 
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int c=0;
        if(nums.size()==1) return nums[0];
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size()-1;i+=2)
        {
            if((nums[i]-nums[i+1])==0)
            {
             if(i==nums.size()-3)
             c=nums[i+2];
             else
             continue;
            }
            else
            {
             c=nums[i];
             break;
            }
        }
        return c;
    }
};