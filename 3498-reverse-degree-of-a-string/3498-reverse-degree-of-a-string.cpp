class Solution {
public:
    int reverseDegree(string s) {
        int tot = 0;
        // vector<int> arr;
        for(int i=0;i<s.size();i++)
        {
            int val='z'-s[i]+1;
            tot+=(i+1)*val;
        }   
         return tot;
    }
};