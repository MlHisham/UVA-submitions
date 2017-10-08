#include<bits/stdc++.h>
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
//                                             HELLO HACKER :D
/*
                       it's recommended that you get some knowledge about recursion and 
                  backtracking and trying to solve the problem before reading others answer 
*/
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
bool prime[100];
void primes(){
    int n= 100;
    memset(prime,true,sizeof prime);
    prime [0]= false;
    prime [1]= false;
    for(int i = 2 ; i*i <= n; i++){
        if(prime[i]){
        for(int j = i*2 ; j<=n ; j+=i){
                prime[j]=false;
            }
        }
    }
}
bool vis[17];
bool allvis(int n){
    for(int i = 1 ; i <= n ; i++){
        if(vis[i]==0)return false;
    }
    return true;
}
vector<vector<int> > st;
vector <int> small ;
void backtrack(int now,int n){
    if(allvis(n)&&prime[now+1]){
        st.push_back(small);
    }
    for(int i = 2 ;i <=n ;i++){
       if(prime[now+i]&&!vis[i]){
        small.push_back(i);
        vis[i]= true;
        backtrack(i,n);
        }
    }
    vis[now]=false;
    small.pop_back();
}
int main(){
   // freopen("in.txt","r",stdin);
   // freopen("out.txt","w",stdout);
    int n ;
    int i = 1;
    primes();
    vector<int> tc ;
    while(scanf("%d",&n)!=EOF){
        tc.pb(n);
    }
    for(int i = 0 ; i <tc.size();i++){
    printf("Case %d:\n",i+1);
    vis[1]= true;
    small.push_back(1);
    backtrack(1,tc[i]);
    for(auto i : st){
        for(int j = 0 ; j < i.size()-1;j++){
            printf("%d ",i[j]);
        }
        printf("%d",i[i.size()-1]);
        puts("");
    }
    st.clear();
    if(i!=tc.size()-1)puts("");
    }
    return 0;
}
