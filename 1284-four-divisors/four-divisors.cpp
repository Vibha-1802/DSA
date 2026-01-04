class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int i,j;
        int flag;
        int sum=0;
        int fsum=0;
        for(i=0;i<nums.size();i++)
        {
            flag=0;
            sum=0;
            for(j=1;j*j<=nums[i];j++)
            {
                if(nums[i]%j==0)
                {
                    flag++;
                    sum=sum+j;
                    if(j!=nums[i]/j)
                    {
                        flag++;
                        sum=sum+(nums[i]/j);
                    }
                }
            }
            if(flag==4)
            {
                fsum = fsum + sum;
            }
        }
        return fsum;
    }
};