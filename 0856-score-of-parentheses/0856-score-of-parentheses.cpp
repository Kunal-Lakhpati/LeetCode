class Solution {
public:
    int scoreOfParentheses(string s) {
        unordered_map<char, int> mp;

        for(int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }

        int ans = 0;
        int depth = 0;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(')
            {
                depth++;
            }
            else
            {
                depth--;

                if(s[i - 1] == '(')
                {
                    ans += 1 << depth;
                }
            }
        }

        return ans;
    }
};

// class Solution {
// public:
//     int scoreOfParentheses(string s) {
//         unordered_map<int,int> mp;
//         for(int i=0;i<s.size();i++)
//         {
//             mp[s[i]]++;
//         }
//         for(int i=0;i<s.size()-1;i++)
//         {
//             if(mp[s[i]]>mp[s[i+1]])
//             {
//                 return mp['('];
//             }
//             else
//             {
//                 return mp[')'];
//             }
//         }
//         return -1;
//     }
// };