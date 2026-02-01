class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int sum=nums[0];
        int first=nums[1];
        int second=nums[2];
        if(nums.size()==3)
        return sum+first+second;
        for(int i=3;i<nums.size();i++)
        {
            if(second>=nums[i] || first>=nums[i])
            {
                if(first>second)
                first=second;
                second=nums[i];
            }
        }
        return sum+first+second;
    }
};