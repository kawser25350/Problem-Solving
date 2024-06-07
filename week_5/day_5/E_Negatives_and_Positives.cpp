/* Author: Kawser Ahmmed
 * 2024
 * 
 */
#include "bits/stdc++.h" 
using namespace std; 
#define mod 1e9 + 7 
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
#define INF 1000000000000000003 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
#define F first 
#define S second 
#define PB push_back 
#define POB pop_back 
#define MP make_pair 
#define     YES      "YES"
#define     Yes    "yes"
#define     NO    "NO"
#define     No   "No"
#define    ln     '\n';
#define int long long 

void solve(int t) 
{
	int n;cin>>n;
	vector<int>a(n);
	FOR(i,n)cin>>a[i];
	

int sum=0;
int cnt=0;
int minvalue=INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(a[i]<0) cnt++;
		sum+=abs(a[i]);

	 minvalue=min(minvalue,abs(a[i]));	
	}
	
	if(cnt%2==0)
	{
		cout<<sum<<ln;
	}
	else {
		cout<<sum-(2*minvalue)<<ln;
	}
}

    

 int32_t main ()
 {
   ios::sync_with_stdio(0); 
    cin.tie(NULL); 
    int T;
    cin>>T;

    for(int t=1;t<=T;++t)
     {
        solve(t);
     }
    return 0;
}
