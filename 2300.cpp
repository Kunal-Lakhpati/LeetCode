class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> newboi(spells.size());
        sort(potions.begin(),potions.end());
        int str=0;
        int l=0;
        int u=potions.size();
        // for(int i=0;i<spells.size();i++)
        // {
            for(int i=0;i<spells.size();i++)
            {
            while(l<u)
            {
                int mid=(l+u)/2;
                if((long)spells[i]*potions[mid]>=success)
                {
                    u=mid;
                }
                else
                {
                    l=mid+1;
                }
            }
            newboi[i]=potions.size()-u;
            l=0;
            u=potions.size();
            }
        // }
        return newboi;
    }
};
        // int str=0;
        // for(int i=0;i<spells.size();i++)
        // {
        //     for(int j=0;j<potions.size();j++)
        //     {
        //         if((spells[i]*potions[j])>=success)
        //         {
        //             str=str+1;
        //         }
        //     }
        //     newboi[i]=str;
        //     str=0;
        // }
        // return newboi;