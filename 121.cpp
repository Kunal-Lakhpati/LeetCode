class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int maxvalue=0;
        for(int i=1;i<prices.size();i++)
        {
            if(min>prices[i])//1>2
            {
                min=prices[i];//min=1
                // if(prices[min]==prices[i-1])
                // {
                //     min=prices[i-1];
                // }
            }
            else
            {
                maxvalue=max(maxvalue,prices[i]-min);
            }
        //     if(prices[i+1]<prices[i])//1<2
        //     {
        //         max=prices[i];
        //     }
        // profit=max-min;
        }
        return maxvalue;
    }
};
        // int max=0;
        // int min=prices[0];
        // int profit=0;
        // for(int i=0;i<prices.size();i++)
        // {
        //     for(int j=i+1;j<prices.size();j++)
        //     {
        //         if(min>prices[i])//
        //         {
        //             min=prices[i];//min=1
        //             if(min==prices[0])
        //             {
        //                 min=prices[i];
        //             if(min==prices.size()-1)
        //             {
        //                 min=i+1;
        //             }
        //             }
        //         }
        //         if(prices[j]<prices[i])//2<1
        //         {
        //             max=prices[i];
        //         }
        //         profit=max-min;
        //     }

// int min=prices[0];
//         int max=prices[0];
//         int profit=0;
//         int value=0;
//         for(int i=1;i<prices.size();i++)
//         {
//             if(min>prices[i])//1>5
//             {
//                 min=prices[i];//min=1
//                 value=i;
//                 if(min==prices.size()-1)
//                 {
//                     return 0;
//                 }
//             }
//             for(int j=value+1;j<prices.size();j++)
//             {
//                 if (value+i<prices[j])
//                 {
//                     max=prices[j];
//                 }
//             }


            // else if(max<prices[i])//7<1
            // {
            //     max=prices[i];
            //     if(prices[0]==max)
            //     {
            //         max=prices[0];
            //     }
            // }