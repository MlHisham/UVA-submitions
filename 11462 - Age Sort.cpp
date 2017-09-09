// USING COUNTING SORT :
#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define inf 0x3f3f3f3f
#define all(v) (v).begin() , (v).end()
#define rep(i,a,b) for(int i = int(a) ;i < int(b) ;i++)
#define repn(i,a,b) for(int (i) = int(a)-1 ;i >= int(b) ;i--)
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
    //freopen("sets.in","r",stdin);
    //freopen("myfile2.txt","w",stdout);
    int n ;
   while(scanf("%d",&n),n){
   int cnt [100]={0};
   int arr[n];
   int mx = -1;
   vi v;
   rep(i,0,n){
    in(arr[i])
    cnt[arr[i]]++;
    mx = max(mx,arr[i]);
   }
   rep(i,0,mx+1){
        while(cnt[i]){
                v.pb(i);
                cnt[i]--;
        }
   }
   rep(i,0,n-1){
        printf("%d ",v[i]);
   }
   printf("%d",v[n-1]);
   puts("");
}
    return 0;
}
