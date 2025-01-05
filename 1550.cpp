class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]%2!=0)
            {
                sum++;
                if(sum==3)
                {
                    return true;
                }
            }
            else
            {
                sum=0;
            }
        }
        return false;
    }
};