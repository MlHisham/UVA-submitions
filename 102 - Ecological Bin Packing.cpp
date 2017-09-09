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
struct gbc{
    int g,b,c;
};
int main(){
  //  freopen("myfile.txt","r",stdin);
    //freopen("myfile2.txt","w",stdout);
    gbc arr[3];
    while(scanf("%d %d %d",&arr[0].b,&arr[0].g,&arr[0].c)!=EOF){
    rep(i,1,3){
        scanf("%d",&arr[i].b);
        scanf("%d",&arr[i].g);
        scanf("%d",&arr[i].c);
    }
    vector<string> vec;
    vec.pb("BGC");
    vec.pb("BCG");
    vec.pb("CGB");
    vec.pb("CBG");
    vec.pb("GCB");
    vec.pb("GBC");
    long long ans[6]= {0};
    ans[0]= arr[0].g+arr[0].c+arr[1].b+arr[1].c+arr[2].b+arr[2].g;
    ans[1]= arr[0].g+arr[0].c+arr[1].b+arr[1].g+arr[2].b+arr[2].c;
    ans[2]= arr[0].b+arr[0].g+arr[1].b+arr[1].c+arr[2].g+arr[2].c;
    ans[3]= arr[0].b+arr[0].g+arr[1].g+arr[1].c+arr[2].b+arr[2].c;
    ans[4]= arr[0].b+arr[0].c+arr[1].b+arr[1].g+arr[2].g+arr[2].c;
    ans[5]= arr[0].b+arr[0].c+arr[1].g+arr[1].c+arr[2].b+arr[2].g;
    long long mn = LLONG_MAX,idx = 0;
    set<string> vec2;
    rep(i,0,6){
        mn = min(ans[i],mn);
    }
    rep(i,0,6){if(ans[i]==mn){vec2.insert(vec[i]);}}
    cout << *vec2.begin();
    printf(" %d\n",mn);
    }
    return 0;
}
