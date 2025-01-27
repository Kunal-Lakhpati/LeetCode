class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // vector<int> arr(nums.size());
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size()-1;i++)
        // {
        //     if(i+1!=nums[i])
        //     {
        //         arr[i]=i+1;
        //     }
        // }
        // arr.resize()
        // return arr;

        // class Solution {

        vector<int> arr(nums.size());
        sort(nums.begin(), nums.end());
        int idx = 0;
        int n = nums.size();
        int j = 0;
        for (int i = 1; i <= n; i++) 
        {
            while (j < n && nums[j] < i)
            j++;
            if (j >= n || nums[j] != i) 
            {
                arr[idx++] = i;
            }
        }
        arr.resize(idx);
        return arr;
    }
};