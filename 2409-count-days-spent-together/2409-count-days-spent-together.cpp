class Solution {
public:
    int countDaysTogether(string aa, string al, string ba, string bl) {
        int d[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int m1=(aa[0]-'0')*10+(aa[1]-'0');
        int d1=(aa[3]-'0')*10+(aa[4]-'0');
        int m2=(al[0]-'0')*10+(al[1]-'0');
        int d2=(al[3]-'0')*10+(al[4]-'0');
        int m3=(ba[0]-'0')*10+(ba[1]-'0');
        int d3=(ba[3]-'0')*10+(ba[4]-'0');
        int m4=(bl[0]-'0')*10+(bl[1]-'0');
        int d4=(bl[3]-'0')*10+(bl[4]-'0');
        int a1=d1;
        int a2=d2;
        int b1=d3;
        int b2=d4;

        for(int i=0;i<m1-1;i++)
        {
            a1+=d[i];
        }
        for(int i=0;i<m2-1;i++)
        {
            a2+=d[i];
        }
        for(int i=0;i<m3-1;i++)
        {
            b1+=d[i];
        }
        for(int i=0;i<m4-1;i++)
        {
            b2+=d[i];
        }

        int st=max(a1,b1);
        int end=min(a2,b2);
        int ans=max(0,end-st+1);
        return ans;
    }
};
        // int a1=0;
        // int a2=0;
        // int b1=0;
        // int b2=0;
        // for(int i=0;i<2;i++)
        // {
        //     a1*=10+(aa[i]-'0');
        //     a2*=10+(al[i]-'0');
        //     b1*=10+(ba[i]-'0');
        //     b2*=10+(bl[i]-'0');
        // }
        // int s1=0;
        // int e1=0;
        // int s2=0;
        // int e2=0;

        // for(int i=0;i<a1;i++)
        // {
        //     s1+=d[i];
        // }
        // for(int i=0;i<a2;i++)
        // {
        //     e1+=d[i];
        // }
        // for(int i=0;i<b1;i++)
        // {
        //     s2+=d[i];
        // }
        // for(int i=0;i<b2;i++)
        // {
        //     e2+=d[i];
        // }
        // vector<int> alice;
        // vector<int> bob;
        // for(int i=0;i<2;i++)
        // {
        //     alice[i]=aa[i];
        // }
        // return alice;