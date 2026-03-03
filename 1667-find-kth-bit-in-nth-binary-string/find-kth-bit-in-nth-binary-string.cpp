class Solution {
public:
    string s;
    string prev;
    char findKthBit(int n, int k) {
        for(int i=0;i<=n;i++)
        {
            s=svalue(i);
        }
        return s[k-1];
    }
    string svalue(int a){
        if(a==0)
        prev="0";
        else if(a==1)
        prev="011";
        else
        prev=prev+"1"+reverse(prev);
        return prev;
    }
    string reverse(string prev){
        string ans;
        for(int i=prev.length()-1;i>=0;i--)
        {
            if(prev[i]=='0')
            ans+="1";
            else
            ans+="0";
        }
        return ans;
    }
};