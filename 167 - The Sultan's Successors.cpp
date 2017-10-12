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
// it's recommended to solve : uva 750 - 8 Queens Chess Problem before trying to solve this one !! 
int row [8];
v<vi> vec;
vi small ;
bool place(int r , int c){
    rep(i,0,c)
        if(row[i]==r || abs(row[i]-r)==abs(i-c))return false;
    return true ;
}
void backtrack (int c){
    if(c==8){
        rep(i,0,8){
            small.pb(row[i]);
            }
        vec.pb(small);
        small.clear();
    }
    rep(r,0,8){
        if(place(r,c)){
            row[c]=r;
            backtrack(c+1);
        }
    }
}

int main(){
  //  freopen("in.txt","r",stdin);
  //  freopen("out.txt","w",stdout);
    int t;
    scanf("%d",&t);
    backtrack(0);
    while(t--){
            int arr[8][8];
            memset(row,0,sizeof row);
            for(int i = 0 ; i < 8 ; i ++){
                for(int j = 0 ; j < 8 ; j++){
                    scanf("%d",&arr[i][j]);
                }
            }
            int cnt = 0 , mx = -1;
            for(int i = 0 ;i < 92;i++){
                for(int j = 0 ; j < 8 ; j++){
                    cnt+= arr[vec[i][j]][j];
                }
                mx = max(mx,cnt);
                cnt = 0;
            }
            printf("%5d",mx);
        puts("");
    }
    return 0;
}
