class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        unordered_map<int, int> a;
        unordered_map<int, int> b;
        vector<int> ans;
        int count=0;
        for(int i=0;i<n;i++)
        {
            a[A[i]]++;
            b[B[i]]++;
            if (A[i]==B[i])
            count++;
            else
            {
                if(a.find(B[i])!= a.end())
                count++;
                if(b.find(A[i])!= b.end())
                count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};