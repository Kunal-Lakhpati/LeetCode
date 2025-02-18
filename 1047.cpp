class Solution {
    public:
        string removeDuplicates(string s) {
            stack<char> stk;
            string ans;
            for(int i=s.size()-1;i>=0;i--)
            {
                if(stk.empty())
                {
                    stk.push(s[i]);
                }
                else if(s[i]==stk.top())
                {
                    stk.pop();
                }
                else
                {
                    stk.push(s[i]);
                }
            }
            while(!stk.empty())
            {
                ans+=stk.top();
                stk.pop();
            }
            return ans;
        }
    };