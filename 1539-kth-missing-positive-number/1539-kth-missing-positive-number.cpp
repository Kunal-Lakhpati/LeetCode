class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l=0;
        int h=arr.size()-1;
        while(l<=h)
        {
            int mid=(l+h)/2;
            int miss=arr[mid]-mid-1;
            if(miss>=k)
            {
                h=mid-1;    
            }
            else
            {
                l=mid+1;
            }
        }
        return l+k;
    }
};
        // vector<int> yokoso;
        // for(int i = 1; i < 1000; i++)
        // {
        //     if(find(arr.begin(), arr.end(), i) == arr.end())
        //     {
        //         yokoso.push_back(i);
        //     }
        // }
        // return yokoso[k - 1];