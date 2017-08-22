#include <bits/stdc++.h>
#define pb push_back
#define mpr make_pair
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
int main(){
   // freopen ("myfile.txt","r",stdin);
   // freopen ("myfile2.txt","w",stdout);
    int n ;
    scanf("%d",&n);
    string x,y,tmp="",tmp2="";
    while(n--){
        map<string,string> mp,mp2;
        set<string> pls,mns,pdc;
        cin >> x>>y;
        bool z = false;
        rep(j,0,x.size()){
            if(x[j]=='{')continue;
            else if(x[j]==':'){
                z = true ;
                continue;
            }
            else if(x[j]==','||x[j]=='}'){
                z=false;
                if(tmp!=""&&tmp2!="")mp[tmp]=tmp2;
                tmp="";
                tmp2="";
                continue;
            }
            if(z)tmp2+=x[j];
            else tmp+=x[j];
        }
        tmp = "",tmp2="",z=false;
        rep(j,0,y.size()){
            if(y[j]=='{')continue;
            else if(y[j]==':'){
                z = true ;
                continue;
            }
            else if(y[j]==','||y[j]=='}'){
                z=false;
                if(tmp!=""&&tmp2!="")mp2[tmp]=tmp2;
                tmp="";
                tmp2="";
                continue;
            }
            if(z)tmp2+=y[j];
            else tmp+=y[j];
        }
        int fst = 0;
        if(!mp2.empty()){
        for(const auto& it:mp2){
                if(mp.find(it.first)==mp.end()){
                    fst ? printf(","):printf("+");
                    cout << it.first;
                    fst=1;
                }
            }
            }
           if(fst== 1) puts("");
           if(!mp.empty()){
        for(const auto& it : mp){
            if(mp2.find(it.first)==mp2.end()){
                fst <= 1? printf("-"):printf(",");
                cout << it.first;
                fst = 2;
            }
        }
        }
        if(fst==2) puts("");
        for(const auto &it : mp){
            if(mp2.find(it.first)!=mp2.end()){
                if(it.second != mp2[it.first]){
                    fst<=2 ? printf("*"):printf(",");
                    cout << it.first;
                    fst = 3;
                }
            }
        }
        if(fst==3)puts("");
        if(fst == 0)puts("No changes");
        puts("");
        }
    return 0;
}
