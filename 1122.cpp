class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        sort(arr1.begin(),arr1.end());
        int var=0;
        for(int i=0;i<arr2.size();i++)
        {
            for(int j=0;j<arr1.size();j++)
            {
                if(arr2[i]==arr1[j])
                {
                    int temp=arr1[j];
                    arr1[j]=arr1[var];
                    arr1[var]=temp;
                    var++;
                }
            }
        }
                int start=var;
                sort(arr1.begin()+start,arr1.end());
        return arr1;
    }
};