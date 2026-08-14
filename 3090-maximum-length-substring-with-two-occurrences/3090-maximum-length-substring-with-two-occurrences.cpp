class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char, int> arr;
        int left = 0;
        int ans = 0;
        for (int right=0;right<s.size();right++) 
        {
            arr[s[right]]++;

            while (arr[s[right]]>2) 
            {
                arr[s[left]]--;
                left++;
            }
            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};