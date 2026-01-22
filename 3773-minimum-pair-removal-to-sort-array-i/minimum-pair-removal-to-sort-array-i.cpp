class Solution {
public:
    int ans=0;
    void sumation(vector<int>& nums){
        if(nums.size()<=1) return;
        int f=nums[0];
        int sum=0;
        int minsum=INT_MAX;
        int pointer1=-1;
        int flag=0;
        for(int i=1;i<nums.size();i++)
        {
            if(f>nums[i]) flag++;
            sum=f+nums[i];
            if(sum<minsum)
            {
                pointer1=i;
                minsum=sum;
            }
            f=nums[i];
        }
        if(flag!=0 && pointer1!=-1)
        {
        nums[pointer1-1]=minsum;
        nums.erase(nums.begin()+pointer1);
        ans++;
        sumation(nums);
        }
    }
    int minimumPairRemoval(vector<int>& nums) {
        sumation(nums);
        return ans;
    }
};