#include <bits/stdc++.h> // TLE
#define pb push_back
#define mp make_pair
#define inf 0x3f3f3f3f
#define all(v) (v).begin() , (v).end()
#define rep(i,a,b) for(int (i) = int(a) ;i < int(b) ;i++)
#define repn(i,a,b) for(int (i) = int(a) ;i >= int(b) ;i--)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
//                                   Hello Hacker :D
int main()
{
   // freopen("myfile.txt","r",stdin);
 //   freopen("myfile2.txt","w",stdout);
    int t,n;
    ll k ;
    scanf("%d",&t);
    while(t--)
    {
        set<ll> st;
        ll mx = -1 ;
        scanf("%d %I64d",&n,&k);
            mx =max(mx,k);
            while(true)
            {
                k= k*k;
                stringstream ss;
                ss << k;
                string s = ss.str();
                // cout << s << endl;
                k = atoi(s.substr(0,n).c_str());
                //   cout << k <<endl;
                mx =max(mx,k);
                if(st.find(k)!=st.end())break;
                st.insert(k);
            }
        printf("%d\n",mx);
    }
    return 0;
}
