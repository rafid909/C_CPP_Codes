#include <bits/stdc++.h>

using namespace std;

#define SYN ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int LLI;
typedef unsigned long long int ULLI;

#define debug(x)         cerr<<__LINE__<<" "<<#x<<" "<<x<<endl;
#define IMAX ((unsigned)1<<31)-1
#define eps 1e-11
#define fill(a,v) memset(a,v,sizeof (a))
#define SZ(X) ((int)X.size())
#define VI vector<int>
#define VS vector<string>
#define PB push_back
#define MSI map<string,int>
#define MLLI map<LLI,LLI>
#define MCI map<char,int>
#define PI acos(-1.0)
#define mk make_pair
#define pLLI pair<LLI,LLI>
#define xx first
#define yy second
#define st string

#define MOD 1000000007
#define MX 1000000
#define RADIANS(x)       (((1.0 * x * PI) / 180.0))
#define DEGREES(x)       (((x * 180.0) / (1.0 * PI)))


int main()
{
    int T;
    scanf("%d",&T);
    for( int t=1; t<=T; t++ )
    {
        int n,val;
        char c;
        scanf("%d",&n);
        getchar();
        map<char,int>mp;
        for( int i=0; i<n; i++ )
        {
            scanf("%c%d",&c,&val);
            getchar();
            if( mp.find(c) == mp.end() )
            {
                mp[c]=val;
            }
            //cout<<c<<" "<<val<<endl;
        }
        int m;
        double ans=0;
        scanf("%d",&m);
        getchar();
        for( int i=0; i<m; i++ )
        {
            char str[30000];
            gets(str);
            //getchar();
            //puts(str);
            for( int i=0; i<strlen(str); i++ )
            {
                if( mp.find(str[i]) == mp.end() )
                {
                    ans+=0;
                }
                else ans+=mp[str[i]];
                //cout<<ans<<endl;
            }
        }
        ans=ans/100;
        printf("%.2lf$\n",ans);
    }
    return 0;
}

