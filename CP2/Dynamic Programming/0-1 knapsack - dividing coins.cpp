#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000
#define MOD 1000000007
#define MEM(a,b) memset(a,(b),sizeof(a))
#define pb push_back
#define mp make_pair
#define F first
#define S second

#define FOR(i,n) REP(i,0,n)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define FOR1(i,n) REP1(i,1,n)
#define REP1(i,a,b) for(int i=a;i<=b;i++)
#define TR(i,x) for(typeof(x.begin()) i=x.begin();i!=x.end();i++)

typedef long long LL;
typedef pair<int,int> ii;
typedef vector<int> vi;

int DP[105][25005];
int arr[105];

int solve(int n,int W){
        if(n<0) return 0;
        if(W==0) return 0;
        if(DP[n][W]!=-1) return DP[n][W];
        if(arr[n] > W) return solve(n-1,W);
        return DP[n][W] = max(solve(n-1,W),
                              solve(n-1,W-arr[n]) + arr[n]);
}

int main() {
        int t,n,sum,res;
        scanf("%d",&t);
        while(t--){
                sum = 0;
                scanf("%d",&n);
                FOR(i,n) scanf("%d",&arr[i]),sum+=arr[i];
                MEM(DP,-1);
                res = solve(n-1,sum/2);
                printf("%d\n",(int)abs(2*(sum/2.0-res)));
        }
        return 0;
}