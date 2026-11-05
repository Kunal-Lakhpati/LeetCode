class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        int count=0;
        int target=0;
        int l=0;
        int h=arr2.size()-1;
        while(target<arr1.size())
        {
            l=0;
            h=arr2.size()-1;
            int mid;
            while(l<=h)
            {
                mid=(l+h)/2;
                if(abs(arr2[mid]-arr1[target])<=d)
                {
                    break;
                }
                else if(arr2[mid]<arr1[target])
                {
                    l=mid+1;
                }
                else
                {
                    h=mid-1;
                }
            }
            if(l>h)
            {
                count++;
            }
            target++;
        }
        return count;
    }
};