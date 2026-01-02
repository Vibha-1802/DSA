class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> vec(n);
        n=n-1;
        int j=n;
        int i=0;
        while(i<=j)
        {
             if(abs(nums[i])<abs(nums[j]))
             {
              vec[n]=nums[j]*nums[j];
             j--;
             }
             else
              {
                vec[n]=nums[i]*nums[i];
                i++;
              }
              n--;
        }
    return vec;
    }
};