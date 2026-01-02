#include <iostream>
#include <vector>
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int low=0;
       int high=nums.size()-1;
       int n;
       while(low<=high)
       {
        n=(low+high)/2;
        if (nums[n]==target)
        return n;
        else if(nums[n]>target)
        high=n-1;
        else 
        low=n+1;
       } 
       return (high+1);
    }
};