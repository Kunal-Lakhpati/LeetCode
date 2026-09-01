class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int hi=*max_element(piles.begin(),piles.end());

        while(l<hi)
        {
            int k=(l+hi)/2;
            int hrs=0;
            for(int yo : piles)
            {
                hrs+=(yo+k-1)/k;
            }
            if(hrs<=h)
            {
                hi=k;
            }
            else
            {
                l=k+1;
            }
        }
        return l;
    }
};