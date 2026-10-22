class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<int,int> p1;
        unordered_map<int,int> p2;
        for(int i=0;i<s.size();i++)
        {
            if(p1[s[i]]!=p2[t[i]])
            {
                return false;
            }
            p1[s[i]]=i+1;
            p2[t[i]]=i+1;
        }
        return true;
    }
};
        // unordered_map<int,int> p1;
        // unordered_map<int,int> p2;
        // for(int i=0;i<s.size();i++)
        // {
        //     p1[s[i]]++;
        // }
        // for(int i=0;i<t.size();i++)
        // {
        //     p2[t[i]]++;
        // }
        // for(int i:p1)
        // {
        //     for(int k:p2)
        //     {
        //         if(i.second==k.second)
        //         {
        //             break;
        //         }
        //         else
        //         {
        //             return false;
        //         }
        //     }
        // }
        // return true;