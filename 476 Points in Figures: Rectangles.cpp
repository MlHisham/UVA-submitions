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
    double xul,yul;
    double xlr,ylr;
   };
int main()
{
    //freopen("myfile.txt","r",stdin);
    //freopen("myfile2.txt","w",stdout);
    char x ;
    int i = 0 ;
    rect r[10];
    pair<double,double> point;
    while(true){
        cin >> x ;
        if(x=='r'){scanf("%lf %lf %lf %lf",&r[i].xul,&r[i].yul,&r[i].xlr,&r[i].ylr);
        i++;}
        else break;
    }
    int k = 1 ;
    while(scanf("%lf %lf",&point.first,&point.second),(point.first!=9999.9&&point.second!=9999.9)){
        bool cont =false;
        rep(j,0,i){
            if(point.first>r[j].xul&&point.second < r[j].yul && point.first < r[j].xlr && point.second >r[j].ylr){
                    cont = true;
                    printf("Point %d is contained in figure %d\n",k,j+1);
            }
        }
        if(!cont){
            printf("Point %d is not contained in any figure\n",k);
        }
        k++;
    }
	return 0;
}
