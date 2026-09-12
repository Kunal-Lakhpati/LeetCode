class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l=0;
        int h=letters.size()-1;
        int mino=INT_MIN;
        vector<int> arr;
        for(int i=0;i<letters.size();i++)
        {
            arr.push_back(letters[i]-'a');
        }
        int val=target-'a';
        while(l<h)
        {
            int mid=(l+h)/2;
            if(val<arr[mid])
            {
                mino=arr[mid];
                h=mid;
            }
            else
            {
                l=mid+1;
            }
        }

        if(val>=arr[l])
        {
            return letters[0];
        }

        return arr[l]+'a';
    }
};