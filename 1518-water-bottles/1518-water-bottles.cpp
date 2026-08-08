class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int sum=numBottles;
        int re=numBottles%numExchange;
        int ad=numBottles/numExchange;
        sum+=ad;
        while (re+ad>=numExchange) 
        {
            int resum=re+ad;
            ad=resum/numExchange;
            re=resum%numExchange;
            sum+=ad;
        }
        
        return sum;
    }
};