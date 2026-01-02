class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int max=nums[0];
       int sum=0;
       if(nums.size()==1) return nums[0];
       for(int i=0;i<nums.size();i++) 
       {
        sum=sum+nums[i];
        if(sum==0 || nums[i]>sum)
         sum=nums[i];
        if(sum>max)
         max=sum;
        }
       return max;
    }
};