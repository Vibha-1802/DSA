#include <unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length() )return false;
        unordered_map<char,int> myMap;
        for(int j=0;j<s.length();j++)
          myMap[s[j]]+=1;
        for(int i=0;i<s.length();i++)
        {
            if(myMap.contains(t[i]))
            {
            if(myMap[t[i]]>0)
            myMap[t[i]]-=1;
            else
            return false;
            }
            else
            return false;
        }
        return true;
    }
};