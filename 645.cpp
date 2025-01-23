class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> newboi(2);
        int i =0;
        while(i<nums.size()){
            int correct =nums[i]-1;
            if(nums[i]!=nums[correct]){
                int temp = nums[i];
                nums[i]=nums[correct];
                nums[correct]=temp;
            }else{
                i++;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=i+1)
            {
                newboi[0]=nums[i];
                newboi[1]=i+1;
            }
        }
        return newboi;
    }
};