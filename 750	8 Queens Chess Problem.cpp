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
int row [8], tc,a,b,line;
bool place(int r , int c){
    rep(i,0,c)
        if(row[i]==r || abs(row[i]-r)==abs(i-c))return false;
    return true ;
}
void backtrack (int c){
    if(c==8 && row[b]==a){
            printf("%2d      %d",++line,row[0]+1);
            rep(i,1,8)
            printf(" %d",row[i]+1);
            puts("");
    }
    rep(r,0,8){
        if(place(r,c)){
            row[c]=r;
            backtrack(c+1);
        }
    }
}
int main(){
    //freopen("myfile.txt","r",stdin);
    //freopen("myfile2.txt","w",stdout);
    in(tc);
    while(tc--){
            in(a) in(b)
            a--,b--;
            line = 0;
            puts("SOLN       COLUMN");
            puts(" #      1 2 3 4 5 6 7 8");
            puts("");
            memset(row,0,sizeof row);
            backtrack (0);
        if(tc)puts("");
    }
    return 0;
}
