class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        int l=0;
        int h=0;
        int mid=0;
        bool found=false;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<=2)
            ans.push_back(-1);
            else
            {
                found=false;
                for(int j=0;j<nums[i];j++)
                {
                    if((j|(j+1))==nums[i])
                    {
                        ans.push_back(j);
                        found=true;
                        break;
                    }
                }
                if(!found)
                ans.push_back(-1);
            }
        }
        return ans;
    }
};