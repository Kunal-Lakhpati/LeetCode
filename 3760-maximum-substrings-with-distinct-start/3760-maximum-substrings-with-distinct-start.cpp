class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char> arr;
        for(char ch:s)
        {
            arr.insert(ch);
        }
        return arr.size();   
    }
};