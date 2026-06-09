class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int maxEl=*max_element(nums.begin(),nums.end());
        int minEl=*min_element(nums.begin(),nums.end());
        return 1LL*(maxEl-minEl)*k;
    }
};