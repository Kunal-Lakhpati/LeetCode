class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stk;
        vector<int> arr;
        for(int i = 0; i < asteroids.size(); i++)
        {
            bool destroyed = false;

            while(!stk.empty() && asteroids[i] < 0 && stk.top() > 0)
            {
                if(stk.top() < -asteroids[i])
                {
                    stk.pop();
                }
                else if(stk.top() == -asteroids[i])
                {
                    stk.pop();
                    destroyed = true;
                    break;
                }
                else
                {
                    destroyed = true;
                    break;
                }
            }
            if(!destroyed)
            {
                stk.push(asteroids[i]);
            }
        }
        while(!stk.empty())
        {
            arr.push_back(stk.top());
            stk.pop();
        }
        reverse(arr.begin(), arr.end());
        return arr;
    }
};