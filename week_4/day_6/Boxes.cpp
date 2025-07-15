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
	vector<int>v(n);
	FOR(i,n)
	cin>>v[i];

	if(n==1)
	{
		cout<<1<<ln;
      return;
	}
   sort(v.begin(),v.end(),greater<int>());
 int ans=v[0];
 int cnt=1;
	for(int i=1;i<n;i++)
	{
		if(ans>=v[i])
		{
			
			ans^=v[i];
		}
		else{
			cnt++;
			ans=v[i];
		}

	}
	cout<<cnt<<ln;
   
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
