class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int p=0;
        int q=0;
        int i=0;
        while(i<nums.size()-1&&nums[i]<nums[i+1])
        i++;
        p=i;
        while(i<nums.size()-1&&nums[i]>nums[i+1])
        i++;
        q=i;
        while(i<nums.size()-1&&nums[i]<nums[i+1])
        i++;
        if(i==nums.size()-1)
        {
        if(p && q && p!=nums.size()-1 && q!=nums.size()-1)
        return true;
        else return false;
        }
        return false;
    }
};