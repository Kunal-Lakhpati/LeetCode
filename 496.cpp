class Solution {
    public:
        vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
            unordered_map<int,int> m;
            stack<int> s;
    
            for(int i=nums2.size()-1;i>=0;i--)
            {
                while(s.size()>0 && s.top()<=nums2[i])
                {
                    s.pop();
                }
                if(s.empty())
                {
                    m[nums2[i]]=-1;
                }
                else
                {
                    m[nums2[i]]=s.top();
                }
                s.push(nums2[i]);
            }
    
            vector<int> ans;
            for(int i=0;i<nums1.size();i++)
            {
                ans.push_back(m[nums1[i]]);
            }
            return ans;
        }
    };
            // vector<int> v(nums1.size(), -1);
            // for(int i = 0; i < nums1.size(); i++) {
            //     int sum = -1;
            //     for(int j = 0; j < nums2.size(); j++) {
            //         if(nums1[i] == nums2[j]) {  
            //             for(int k = j + 1; k < nums2.size(); k++) {
            //                 if(nums2[k] > nums2[j]) {
            //                     sum = nums2[k];
            //                     break;
            //                 }
            //             }
            //             break;
            //         }
            //     }
            //     v[i] = sum;
            // }
            // return v;