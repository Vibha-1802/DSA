class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        bool found=false;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<=2)
            ans.push_back(-1);
            else
            {
                found=false;
                for(int j=1;j<32;j++) 
                {
                    if((nums[i]&(1<<j))>0) continue; 
                    ans.push_back((nums[i]^(1<<(j-1))));
                    found=true;
                    break;
                }
                if(!found)
                ans.push_back(-1);
            }
        }
        return ans; 
    }
};