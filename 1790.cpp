class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int count=0;
        string c1="";
        string c2="";
        int j=0;
        if(s1==s2)
        {
            return true;
        }
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]!=s2[i])
            {
                count++;
                c1[j]=s1[i];
                c2[j]=s2[i];
                j++;
                if(count>2)
                {
                    return false;
                }
            }
        }
        if(c1[0]==c2[1] && c1[1]==c2[0] && count==2)
        {
            return true;
        }
        return false;
    }
};