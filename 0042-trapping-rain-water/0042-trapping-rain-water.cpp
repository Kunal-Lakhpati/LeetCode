class Solution {
public:
    int trap(vector<int>& height) {
        int st = 0;
        int end = height.size() - 1;
        int l = 0;
        int r = 0;
        int tot = 0;
        while(st<end)
        {
            l = max(l,height[st]);
            r = max(r,height[end]);
            if(l<r)
            {
                tot+=l-height[st];
                st++;
            }
            else
            {
                tot+=r-height[end];
                end--;
            }
        }
        return tot;
    }
};