#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,fl=0,j,n;

        cin>>n;
        string s,s1 = "abacaba";
        cin>>s;
        for(i=0;i<=s.length()-7;i++)
        {
            for(j=0;j<7;j++)
            {
                if(s[i+j]!=s1[j]&&s[i+j]!='?' )
                {
                    i = i+j;
                    break;
                }

            }
            if(j==7)
                fl = 1;
        }
        if(fl == 1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
