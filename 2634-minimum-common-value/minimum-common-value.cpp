class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int i=0;
        int j=0;
        while(i<n1&&j<n2)
        {
            if(nums1[i]==nums2[j])
            return nums1[i];
            else if(nums1[i]<nums2[j])
            i++;
            else
            j++;
        }
        while(i<n1){
            if(nums1[i]==nums2[j-1])
            return nums1[i];
            i++;
        }
        while(j<n2){
            if(nums1[i-1]==nums2[j])
            return nums1[i];
            j++;
        }
        return -1;
    }
};