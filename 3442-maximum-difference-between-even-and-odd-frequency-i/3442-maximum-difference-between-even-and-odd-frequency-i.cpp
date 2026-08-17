class Solution {
public:
    int maxDifference(string s) {
        int n=s.size();
        vector<int> freq(26);
        for(int i=0;i<n;i++)
        {
            freq[s[i]-'a']++;
        }
        int emax=0,emin=INT_MAX;
        for(int i=0;i<26;i++)
        {
            if(freq[i]%2==0 && freq[i]>0)
            {
                if(freq[i]<emin)
                {
                    emin=freq[i];
                }
            }
            else if(freq[i]%2==1 && freq[i]>0)
            {
                if(freq[i]>emax) emax=freq[i];
            }
        }
        return emax-emin;
    }
};


// class Solution {
// public:
//     int maxDifference(string s) {
//         map<char,int> arr;
//         int sum=0;
//         int evenmax=INT_MIN;
//         int oddmax=INT_MIN;
//         for(int i=0;i<s.size();i++)
//         {
//             arr[s[i]]++;
//         }
//         for(int i=0;i<arr.size();i++)
//         {
//             if(arr[i]>evenmax && arr[i]%2==0)
//             {
//                 evenmax=min(evenmax,arr[i]);
//             }
//             if(arr[i]%2!=0)
//             {
//                 oddmax=max(oddmax,arr[i]);
//             }
//         }
//         sum=oddmax-evenmax;
//         return sum;
//     }
// };