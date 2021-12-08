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

class samp
{

    char *str,s;
public:
    samp()
    {
         s ='\0';
    }
    ~samp()
    {
        if(s) free(s);
        cout<<"freeing s\n";
    }
    void show()
    {
        cout<<s<<"\n";
        void set(char *str );
    }
};

void samp():: set(char *str)
{
    S=(char*)malloc(strlen(str)+1);
    if(!s)
    {
        cout<<"Allocation error\n";
        exit(1);
    }
    strcpy(s,str);

    samp input()
    {
        char s[80];
        samp str;
        cout<<"Enter a string\n";
        cin>>s;
        str.set(s);
        return str;
    }
}
int main()
{
    samp ob;
    ob=input();
    ob.show();
    return 0;
}

