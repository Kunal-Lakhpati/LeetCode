class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) 
        {
            return false;
        }
        string str=to_string(x);
        int l = 0;
        int u = str.length() - 1;

        while (l < u) 
        {
            if (str[l] != str[u]) 
            {
                return false;
            }
            l++;
            u--;
        }
        return true;
    }
};