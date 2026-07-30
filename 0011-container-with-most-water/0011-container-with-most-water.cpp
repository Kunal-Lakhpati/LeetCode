class Solution {
public:
    int maxArea(vector<int>& h) {
        int l = 0;
        int r = h.size() - 1;
        int ans = 0;
        while (l < r) 
        {
            int water=min(h[l],h[r])*(r-l);
            ans=max(ans,water);

            if (h[l] < h[r])
            {
                l++;
            }
            else
            {
                r--;
            }
        }

        return ans;
    }
};
        // int r = h.size() - 1;
        // int water = 0;
        // int max = 0;

        // for (int i=0;i<h.size() && i<r; i++) 
        // {
        //     if (h[i] > h[r]) 
        //     {
        //         water = h[r] * (r - i);
        //     } 
        //     else 
        //     {
        //         water = h[i] * (r - i);
        //     }
        //     if (water > max) 
        //     {
        //         max = water;
        //     }
        //     r--;
        // }
        // return max;