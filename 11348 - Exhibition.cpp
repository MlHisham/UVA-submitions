#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define inf 0x3f3f3f3f
#define all(v) (v).begin() , (v).end()
#define rep(i,a,b) for(int (i) = int(a) ;i < int(b) ;i++)
#define repn(i,a,b) for(int (i) = int(a) ;i >= int(b) ;i--)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
//                                   Hello Hacker :D
int main()
{
    //freopen("myfile.txt","r",stdin);
    //freopen("myfile2.txt","w",stdout);
    int t,n;
    scanf("%d",&t);
    int tmpt = t;
    while(t--)
    {
        scanf("%d",&n);
        printf("Case %d:",tmpt-t);
        set<int> arr[n];
        double cnt[n]={0},freq[10010]={0},ct=0;
        rep(i,0,n){
            int z;
            scanf("%d",&z);
            rep(j,0,z){
            int x;
            scanf("%d",&x);
            if(arr[i].find(x)==arr[i].end())freq[x]++;
            arr[i].insert(x);
            }
        }
        rep(i,0,n)
              for(int j : arr[i])
                if(freq[j]==1)cnt[i]++,ct++;
        rep(i,0,n)printf(" %.6f\%%",cnt[i]/ct*100);
        puts("");
        }
    return 0;
}
