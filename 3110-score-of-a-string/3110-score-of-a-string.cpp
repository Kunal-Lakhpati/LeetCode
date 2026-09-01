class Solution {
public:
    int scoreOfString(string s) {
        vector<int> arr;
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            arr.push_back(s[i]);
        }
        for(int i=0;i<arr.size()-1;i++)
        {
            sum+=abs(arr[i]-arr[i+1]);
        }
        return sum;
    }
};