#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define inf 0x3f3f3f3f
#define all(v) (v).begin() , (v).end()
#define rep(i,a,b) for(int (i) = int(a) ;i <= int(b) ;i++)
#define repn(i,a,b) for(int (i) = int(a) ;i >= int(b) ;i--)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
//                                   Hello Hacker :D
int main(){
   int t;
   while(scanf("%d",&t),t){
    map<set<int>,int> frosh;
    rep(i,0,t-1){
        set<int> l;
        rep(j,0,4){
        int x;
        scanf("%d",&x);
        l.insert(x);
        }
        frosh[l]++;
    }
        int pop = 1;
        for(auto const &it: frosh){
            pop = max(pop,it.second);
        }
        int cnt = 0 ;
        for(auto const &it: frosh){
            if(it.second==pop)cnt++;
        }
        printf("%d\n",cnt*pop);
   }
    return 0 ;
}
