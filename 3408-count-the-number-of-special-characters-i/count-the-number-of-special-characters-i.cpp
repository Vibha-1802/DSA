class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<bool> small(26,false);
        vector<bool> capital(26,false);
        for(char ch:word) {
            if(islower(ch)) {
                small[ch-'a'] = true;
            } else {
                capital[ch-'A'] = true;
            }
        }
        int count = 0;
        for(int i=0;i<26;i++) {
            if(small[i] && capital[i]) {
                count++;
            }
        }
        return count;
    }
};