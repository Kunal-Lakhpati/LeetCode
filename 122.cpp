class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int profit=0;
        if(1==prices.size())
        {
            return 0;
        }
        // if(i==prices.size())
        // {
        //     break;
        // }
        for(int i=0;i<prices.size()-1;i++)
        {
            if(prices[i]<prices[i+1])
                
            {
                profit+=(prices[i+1]-prices[i]);
            } 
        }
        return profit;
    }
};
        // int yo=0;
        // int trys=0;
        // int min=prices[0];
        // int maxp=0;
        // for(int i=0;i<prices.size();i++)
        // {
        //     if(min<prices[i])
        //     {
        //         min=prices[i];
        //         trys=i;
        //     }
        // }
        // for(int j=trys;j<prices.size();j++)
        // {
        //   if(maxp>prices[j])  
        //   {
        //     maxp=prices[j];
        //   }
        // }
        // yo+=maxp-min;
        // return yo;
