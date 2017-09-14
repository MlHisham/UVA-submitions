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
struct data {
    string name;
    int l,h;
}
;
int main(){
    //freopen("myfile.txt","r",stdin);
    //freopen("myfile2.txt","w",stdout);
    int t;
    scanf("%d",&t);
    while(t--){
        int n ;
        scanf("%d",&n);
        data arr[n];
        rep(i,0,n){
            cin >> arr[i].name;
            scanf("%d %d",&arr[i].l,&arr[i].h);
        }
        int Q;
        scanf("%d",&Q);
        rep(i,0,Q){
            int tst,cnt = 0 ,idx;
            scanf("%d",&tst);
            rep(i,0,n){
                if(arr[i].l<=tst&&arr[i].h>=tst){
                    cnt++;
                    idx = i;
                }
            }
            if(cnt == 1){
            cout << arr[idx].name;
            puts("");
            }else {
            puts("UNDETERMINED");
        }
        }
    if(t!=0)puts("");
    }
    return 0;
}
