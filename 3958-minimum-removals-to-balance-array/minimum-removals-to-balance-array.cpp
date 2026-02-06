class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
    if(nums.size()==1) return 0;
    int n=nums.size();
    sort(nums.begin(),nums.end());
    int maxno=nums[0];
    int minno=nums[0];
    int L = 1;
    int i = 0;
    for(int j=0;j<n;j++)
    {
        int maxno=nums[j];
        int minno=nums[i];
        while(i<j&&maxno>(long long)k*minno) {
            i++;
            minno=nums[i];
        }
        L=max(L,j-i+1);
    }
        return n-L;
    }
};