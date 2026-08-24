class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        int n = 0,m = 0,ans = 0;
        for(int i = 0; i < operations.size(); i++)
        {
            if(operations[i] == "+")
            {
                if(!s.empty())
                {
                    n = s.top();
                    s.pop();
                }
                if(!s.empty())
                {
                    m = s.top();
                    s.push(n);
                }
                s.push(n+m);
            }
            else if(operations[i] == "D")
            {
                if(!s.empty()){
                    n = s.top();
                    s.push(n*2); 
                }
            }
            else if(operations[i] == "C")
            {                
                 s.pop();
            }
            else
            {
                bool check = false;
                string t = operations[i];
                if(t[0] == '-')
                {
                    check = true;
                    string temp = "";
                    for(int k = 1; k < t.size(); k++)
                    {
                        temp += t[k];
                    }
                    t = temp;
                }
                int sum = 0, place = 1;
                for(int j = t.size()-1; j >= 0; j--)
                {
                    m = t[j] - '0';
                    sum += m * place;
                    place *= 10;
                }
                if(check == true) 
                {
                    sum = 0 - sum;
                }
                s.push(sum);
            }
        }
        while(!s.empty())
        {
            n = s.top();
            ans += n;
            s.pop();
        }
        return ans;
    }
};