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
#define v vector
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
//                                   Hello Hacker :D
int n ,m,maxs;
vi vec;
vi small ;
int arr[20];
void backtrack (int idx, int sum){
    if(sum>maxs){
        vec = small ;
        maxs = sum;
    }
    for(int i = idx ; i < m ; i ++){
        if(sum+arr[i]<=n){
            sum+=arr[i];
            small.pb(arr[i]);
            backtrack(i+1,sum);
            sum-=arr[i];
            small.pop_back();
        }
    }
}
int main(){
    //freopen("in.txt","r",stdin);
   // freopen("out.txt","w",stdout);
    while(scanf("%d %d",&n,&m)!=EOF){
        maxs = 0 ;
        for(int i = 0 ; i < m ; i ++){
            scanf("%d",&arr[i]);
        }
        backtrack(0,0);
        for(int i = 0 ; i < vec.size();i++){
            printf("%d ",vec[i]);
        }
        printf("sum:%d\n",maxs);
        small.clear();vec.clear();
    }
        return 0;
}
