class Solution {
public:
    string defangIPaddr(string address) {
        string p="";
        for(int i=0;i<address.size();i++)
        {
            char ch=address[i];
            if(ch=='.')
            {
                p=p+"[.]";
            }
            else
            {
                p=p+ch;
            }
        }
        return p;
    }
};