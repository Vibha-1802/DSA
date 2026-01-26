class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> answer;
        int mn=INT_MAX;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(mn==arr[i+1]-arr[i])
                answer.push_back({arr[i],arr[i+1]});
            else if(mn>arr[i+1]-arr[i])
            {
                answer.clear();
                answer.push_back({arr[i],arr[i+1]});
                mn=arr[i+1]-arr[i];
            }
        }
        return answer;    
    }
};