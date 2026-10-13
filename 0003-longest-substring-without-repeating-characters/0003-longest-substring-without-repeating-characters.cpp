class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int maxo=0;
        int j=0;
        map<char,int> mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            l++;
            while(mp[s[i]]>1)
            {
                mp[s[j++]]--;
                l--;
            }
            maxo=max(maxo,l);
        }
        return maxo;
    }
};