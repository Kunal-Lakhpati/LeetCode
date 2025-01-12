class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int upper=arr.size()-1;
        int lower=0;
        int mid;
        int max=0;
                while(lower<=upper)
                {
                    mid=(lower+upper)/2;
                    if(arr[mid]>arr[mid+1])
                    {
                        upper = mid;
                    }
                    else if(arr[mid]<arr[mid-1])
                    {
                        upper=mid-1;
                    }
                    if(arr[mid]>arr[mid-1])
                    {
                       lower=mid+1;
                    }
                }
        return mid;
    }
};