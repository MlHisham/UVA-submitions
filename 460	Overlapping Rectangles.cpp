#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define inf 0x3f3f3f3f
#define all(v) (v).begin() , (v).end()
#define rep(i,a,b) for(int i = int(a) ;i < int(b) ;i++)
#define repn(i,a,b) for(int (i) = int(a) ;i >= int(b) ;i--)
#define in(n) scanf("%d",&n);
#define llin(n) scanf("%I64d",&n);
#define llout(n) printf("%I64d",n);
#define out(n) printf("%d",n);
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
//                                   Hello Hacker :D
struct rect{
    int xll,yll;
    int xur,yur;
};
int main()
{
    //freopen("myfile.txt","r",stdin);
    //freopen("myfile2.txt","w",stdout);
    int t;
    scanf("%d",&t);
    while(t--){
        rect r;
        rect r2;
        scanf("%d %d %d %d",&r.xll,&r.yll,&r.xur,&r.yur);
        scanf("%d %d %d %d",&r2.xll,&r2.yll,&r2.xur,&r2.yur);
        int i = ((r.xll > r2.xll )?r.xll : r2.xll),j = ((r.yll > r2.yll )?r.yll : r2.yll),
        k = ((r.xur < r2.xur )?r.xur : r2.xur), l = ((r.yur < r2.yur )?r.yur : r2.yur);
        if(i >= k || j >= l)
            puts("No Overlap");
        else
            printf("%d %d %d %d\n", i, j, k, l);
        if(t)
            puts("");
        }
	return 0;
}
