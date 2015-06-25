#include <bits/stdc++.h>
using namespace std;
 
#define REP(i,a,b) for(int i=a;i<b;i++)
#define FOR(i,n) REP(i,0,n)
#define REP1(i,a,b) for(int i=a;i<=b;i++)
#define FOR1(i,n) REP1(i,1,n)
#define INF 1000000000

#define pb push_back
#define mp make_pair

#define MEM(a,b) memset(a,(b),sizeof(a))
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define F first
#define S second

typedef long long LL;
typedef pair<int,int> ii;
typedef vector<int> vi;

int main() {
    int n,a,b,c;

    while(scanf("%d",&n)){
		priority_queue<int> pq;				/*PRIORITY QUEUE DECLARATION*/

    	if(n==0)
    		break;

    	FOR(i,n) {
    		scanf("%d",&a);
    		pq.push(-a);					/*Insert element in priority queue*/
    	}

    	LL cost = arr[0]+arr[1];

    	while(pq.size() != 1){
    		a = pq.top();pq.pop();			/*Retrieve and remove element element*/
    		b = pq.top();pq.pop();
    		c = a + b;
    		cost += -c;
    		pq.push(c);
    	}

    	printf("%lld\n",cost);
    }
    return 0;
}