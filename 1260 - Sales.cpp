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
int main(){
    //freopen("myfile.txt","r",stdin);
   // freopen("myfile2.txt","w",stdout);
    int t;
    scanf("%d",&t);
    while(t--){
        int n ;
        scanf("%d",&n);
        int arr[n];
        int cnt[n-1]={0};
        rep(i,0,n){
            scanf("%d",&arr[i]);
        }
        rep(i,1,n){
            repn(j,i-1,0){
                if(arr[i]>=arr[j]){
                    cnt[i-1]++;
                }
            }
        }
        int sum = 0 ;
        rep(i,0,n-1){
            sum+=cnt[i];
     //       cout << cnt[i]<< " ";
        }
     //   puts("");
        printf("%d\n",sum);
    }
    return 0;
}
