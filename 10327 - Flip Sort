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
int mrg (int a[],int temp[],int l , int mid ,int h){
    int cnt = 0 ;
    rep(i,l,h+1)
        temp[i]=a[i];
    int i = l , j= mid+1 ;
    rep(k,l,h+1){
        if(i > mid) a[k]=temp[j++];
        else if (j > h) a[k]=temp[i++];
        else if(temp[i]>temp[j])a[k]=temp[j++],cnt = cnt +(mid+1-i);
        else a[k]=temp[i++];
    }
    return cnt ;
}
int mrgsrt (int a[],int temp[],int l ,int h){
    int mid = l+(h-l)/2,cnt = 0;
    if(l<h){
        cnt = mrgsrt(a,temp,l,mid);
    cnt += mrgsrt(a,temp,mid+1,h);
   cnt+= mrg(a,temp,l,mid,h);
    }
    return cnt ;
}

int main(){
	int n ;
	while(scanf("%d",&n)!=EOF){
	int a[n],tmp[n];
	rep(i,0,n)scanf("%d",&a[i]);
    int cnt = mrgsrt(a,tmp,0,n-1);
    printf("Minimum exchange operations : %d\n",cnt);
    }
    return 0;
}
