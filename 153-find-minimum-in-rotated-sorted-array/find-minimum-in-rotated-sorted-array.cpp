class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0;
        int h=nums.size()-1;
        int mid=0;
        int s=nums[0];
        if(h==1) return (s>nums[1])?nums[1]:s;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(nums[mid]<=s)
             {
                s=nums[mid];
                h--;
             }
             else
             l++;
        }
        return s;
    }
};