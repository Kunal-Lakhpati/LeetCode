class Solution {
public:
    int numOfUnplacedFruits(vector<int>& f, vector<int>& b) {
        // int count=0;
        // for(int i=0;i<fruits.size();i++)
        // {
        //    for(int j=0;j<baskets.size();j++)
        //    {
        //         if(fruits[i]<=baskets[j])
        //         {
        //             count++;
        //             baskets[j]=-1;
        //             break;
        //         }
        //         else
        //         {
        //             continue;
        //         }
        //    }
        // }
        // if(count<baskets.size())
        // {
        //     return 1;
        // }
        // return 0;
        
        // int count = 0;
        // for (int i = 0; i < fruits.size(); i++) 
        // {
        //     bool placed = false;
        //     for (int j = 0; j < baskets.size(); j++) 
        //     {
        //         if (fruits[i] <= baskets[j]) 
        //         { 
        //             count++;
        //             baskets[j] = -1;
        //             placed = true;
        //             break;
        //         }
        //     }
        // }
        // return fruits.size() - count;


        int cnt=0;
        for(int i=0;i<f.size();i++)
        {
            for(int j=0;j<b.size();j++)
            {
                if(f[i]<=b[j])
                {
                    cnt++;
                    b[j]=-1;
                    break;
                }
            }
        }
        return f.size()-cnt;
    }
};
