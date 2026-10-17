
class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans=0;
        int n=s.size();
        for(char i='A';i<='Z';i++)
        {
            int c=0;
            int j=0;
            int re=0;
            while(j<n)
            {
                if(s[j]==i)
                {
                    j++;
                }
                else if(re<k)
                {
                    j++;
                    re++;
                }
                else
                {
                    if(s[c]!=i)
                    {
                        re--;
                    }
                    c++;
                }

                ans=max(ans,j-c);
            }
        }
        return ans;
    }
};
