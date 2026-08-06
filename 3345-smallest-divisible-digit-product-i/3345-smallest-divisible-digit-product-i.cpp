class Solution {
public:
    int smallestNumber(int n, int t) {
        int n1=0;
        int n2=0;
        for(int i=n;i<=100;i++)
        {
            if(i<10)
            {
                if(i%t==0)
                {
                    return i;
                }
                continue;
            }
            if(i==100)
                {
                    if(0%t==0)
                    {
                        return 100;
                        continue;
                    }
                }
            n1=i%10;
            if(n>=10)
            {
                n2=i/10;
            }
            if(n1*n2%t==0)
            {
                return i;
            }
        }
        return n;
    }
};