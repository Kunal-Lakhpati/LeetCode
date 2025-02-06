class Solution {
public:
    int numberOfSteps(int num) {
        int c=0;
        int ans = num; 
            while(ans!=0)
            {
        
                if( ans % 2 == 0)
                {
                    ans /=2;
                    c++;
                }
                else
                {
                    ans-=1;
                    c++;
                }   
            }
        return c;
    }
};