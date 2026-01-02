class Solution {
public:
    int search(vector<int>& nums, int target) {
        int h=nums.size()-1;
        int l=0;
        int mid=0;
        while(l<=h)
        {
           mid=(l+h)/2;
           if(nums[mid]==target) 
            return mid;
           else if(nums[h]==target)
            return h;
           else if(nums[l]==target)
            return l;
           else if(nums[mid]<target)
            h--;
           else if(nums[mid]>target) 
            l++;
        }
        return -1;
    }
};