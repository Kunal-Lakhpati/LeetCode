class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count=0;
        int n=heights.size();
        vector<int> news(n);
        for(int i=0;i<heights.size();i++)
        {
            news[i]=heights[i];
        }
        sort(heights.begin(),heights.end());
        for(int i=0;i<heights.size();i++)
        {
            if(heights[i]!=news[i])
            {
                count++;
            }
        }
        return count;
        
    }
};
