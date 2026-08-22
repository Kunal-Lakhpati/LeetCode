class Solution {
public:
    bool checkDivisibility(int n) {
        vector<int> nums;
        int sum = 0;
        int mult = 1;
        int total = 0;
        int temp = n;
        while(temp>0)
        {
            nums.push_back(temp%10);
            sum+=nums.back();
            mult*=nums.back();
            temp/=10;
        }
        total = sum + mult;
        if(n%total==0)
        {
            return true;
        }
        return false;
    }
};