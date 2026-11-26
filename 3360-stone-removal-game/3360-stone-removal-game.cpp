class Solution {
public:
    bool canAliceWin(int n) {
        int a=10;
        int ans=0;
        while(n>=a && a>0)
        {
            n=n-a;
            a--;
            ans++;
        }
        if(ans%2==1)
        {
            return true;
        }
        return false;
    }
};