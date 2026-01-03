class Solution {
public:
    string longestCommonPrefix(vector<string>& strs){
        vector<char> v;
        for(int i=0;i<strs.size();i++){
            string word = strs[i];
            if (word.empty()) {
                v.clear();
                break;
            }
            for(int j =0;j<word.length();j++){
                if(i==0) {
                    v.push_back(word[j]);
                    continue;
                }
                if(j>=v.size()||v[j]!=word[j]){
                    v.erase(v.begin()+j,v.end());
                    break;
                }
            }
            if (i>0&&v.size()>word.length()){
                v.erase(v.begin()+word.length(),v.end());
            }
        }
        return string(v.begin(),v.end());
    }
};
