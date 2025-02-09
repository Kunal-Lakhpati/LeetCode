class Solution {
public:
    bool isValid(string s) {
        stack <char> q;

        for (char i : s) {
            if (i == '[' || i == '{' || i == '(') {
                q.push(i);
            }
            else {
                
                if (q.empty() || q.top() == '{' && i != '}' ||q.top() == '(' && i != ')' || q.top() == '[' && i != ']') {
                    return false;
                }
                else {
                    q.pop();
                }
            }
        }
        if (!q.empty())
            return false;
        return true;
    }
};