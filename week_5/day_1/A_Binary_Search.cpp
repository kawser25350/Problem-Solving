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

void solve() 
{
	int n,q;cin>>n>>q;
	vector<int>v(n);

	FOR(i,n) cin>>v[i];
	

	while(q--)
	{
		int x;cin>>x;
        int l=0,r=n-1;
        int idx=-1;

        while(l<=r)
        {
        	int mid=(l+r)/2;
        	if(x==v[mid])
        	{
        		idx=1;
        		cout<<YES<<ln;
        	
        		break;
        	}
        	else if(x>v[mid])
        	{
        		l=mid+1;
        	}
        	else{
        		r=mid-1;
        	}
        }

      if(idx==-1) cout<<NO<<ln;


	}
        
}

    

 int32_t main ()
 {
   ios::sync_with_stdio(0); 
    cin.tie(NULL); 
    
        solve();
    
    return 0;
}
