class Solution {
public:
    char kthCharacter(int k) {
        int j=0;
        int n=k;
        while(n>1)
        {
            int lol=log2(n);
            int mid=(1<<lol);
            if(n==mid)
            {
                lol--;
                mid=(1<<lol);
            }
            n-=mid;
            j++;
        }
        return (char)('a'+j);
    }
};