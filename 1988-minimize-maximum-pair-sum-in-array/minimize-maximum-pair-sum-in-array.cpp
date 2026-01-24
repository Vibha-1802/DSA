class Solution {
public:
    int minPairSum(vector<int>& nums) {
    if(nums.size()==0) return 0;
    sort(nums.begin(),nums.end());   
    int i=0;
    int j=nums.size()-1;
    int max=-1;
    int sum=0;
    while(i<j)
    {
        sum=nums[i]+nums[j];
        if(max<sum) max=sum;
        i++;
        j--;
    }
    return max;
    }
};