class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int> arr;
        int i=0;
        int sum=0;
        while(n>0)
        {
            arr.push_back(n%10);
            sum+=arr[i];
            i++;
            n/=10;
        }   
        return sum;
    }
};