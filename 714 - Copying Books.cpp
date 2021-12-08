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
    int T,n,m,ar[10000];
    freopen("output.txt","w",stdout);
    scanf("%d",&T);
    for( int t=1; t<=T; t++ )
    {
        scanf("%d%d",&n,&m);
        int sum=0;
        for( int i=0; i<n; i++ ) cin>>ar[i],sum+=ar[i];
        int cnt=0;
        sum/=m;
        //cout<<sum<<endl;
        printf("%d",ar[0]);
        cnt+=ar[0];
        for( int i=1; i<n; i++ )
        {
            if( m == 1 )
            {
                printf(" %d",ar[i]);
                //cout<<i<<endl;
                for(int j=i+1; j<n; j++ ) printf(" %d",ar[j]);
                break;
            }
            if( cnt+ ar[i] <=sum )
            {
                printf(" %d",ar[i]);
                cnt+=ar[i];
            }
            else
            {
                printf(" /");
                cnt=0,i--;
                m--;
            }
        }
        printf("\n");
    }
    return 0;
}

