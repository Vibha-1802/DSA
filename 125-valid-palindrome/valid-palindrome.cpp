class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length()-1;
        string r;
        string s1;
        int j=0;
        for(int i=n;i>=0;i--)
        {
        if(isalpha(s[i])||isdigit(s[i]))
          r+=tolower(s[i]);
        if(isalpha(s[j])||isdigit(s[j]))
          s1+=tolower(s[j]);
        j++; 
        }
        if(s1==r)
        return true;
        else
        return false;
    }
};