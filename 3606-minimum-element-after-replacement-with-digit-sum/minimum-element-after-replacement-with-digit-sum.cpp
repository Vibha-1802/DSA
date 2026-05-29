class Solution {
public:
    int minElement(vector<int>& nums) {
        int num;
        int sum;
        int ans=40;
        for(int i=0;i<nums.size();i++){
            num=nums[i];
            sum=0;
            while(num>0){
                sum+=(num%10);
                num/=10;
            }
            ans=min(ans,sum);
        }
        return ans;
    }
};