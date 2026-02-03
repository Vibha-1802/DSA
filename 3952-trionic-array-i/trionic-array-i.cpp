class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        if (nums.size()==3)
        return false;
        int p=0;
        int q=0;
        int n=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1] && q==0)
            p=i+1;
            else if(nums[i]>nums[i+1] && n==0)
            q=i+1;
            else if(nums[i]==nums[i+1])
            return false;
            else if(nums[i]<nums[i+1])
            n++;
        }
        if(p<q && p!=0 && q!=nums.size()-1 && (n+q)==nums.size()-1)
        return true;
        else return false;
    }
};