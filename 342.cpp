class Solution {
public:
    bool isPowerOfFour(int n) {
        double a=log10(n);
        double b=log10(4);
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