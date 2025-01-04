class Solution {
public:
    vector<int> sumZero(int n) {
        int sum=0;
        int even=0,odd=0;
        // int* a = new int[n];
        vector<int> a(n);
        for(int i=0;i<n/2;i++)
        {
            if(n%2==0)
            {
                a[n/2+i]=i+1;
                a[n/2-i-1]=-(i+1);
            }
            else
            {
            a[n/2]=0;
            a[n/2+i+1]=i+1;
            a[n/2-i-1]=-(i+1);
            }
        }
        return a;
    }
};