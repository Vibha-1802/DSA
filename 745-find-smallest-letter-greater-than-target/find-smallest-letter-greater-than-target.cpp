class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if(letters[0]>target)
        return letters[0];
        else
        {
            for(int i=1;i<letters.size();i++)
               if(letters[i]>target) return letters[i];
        }
        return letters[0];
    }
};