class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        if(m==1&&n==1)
        {
            if(target==matrix[0][0])
            return true;
            else
            return false;
        }
        int mid,mid2;
        int l=0;
        int h=m-1;
        mid=(l+h)/2;
        while(l<=h && m!=1)
        {
            mid=(l+h)/2;
            if(target==matrix[mid][n-1])
              return true;
            else if(target>matrix[mid][n-1])
             l=l+1;
            else if(target<matrix[mid][n-1]) 
             h=h-1;
            
        }
        l=0;
        h=n-1;
        while(l<=h && n!=1)
        {
            mid2=(l+h)/2;
            if(target==matrix[mid][mid2])
              return true;
            else if(target>matrix[mid][mid2])
                l=mid2+1;
            else if(target<matrix[mid][mid2]) 
                h=mid2-1;
        }
        return false;
    }
};