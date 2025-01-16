class Solution {
public:
    bool isPowerOfTwo(int n) {
        double a=log10(n);
        double b=log10(2);
        double x=a/b;
        double y=1.0;
        double z=0;

        if(fmod(x,y)==0)
        {
            return true;
        }
        return false;
    }
};
        // int x=log2(n);
        // if(n==1)
        // {
        //     return true;
        // }
        // if(n%2!=0)
        // {
        //     return false;
        // }
        // if(x%1==0)
        // {
        //     return true;
        // }
        // return false;