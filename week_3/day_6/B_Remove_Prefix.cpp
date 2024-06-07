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

void solve(int t) 
{
	ll n;
	cin>>n;
	vector<ll>v(n);
	unordered_map<ll,ll>mp;
	FOR(i,n)
	{
		cin>>v[i];
		

	}
	
	ll cnt=0;
	for(int i=n-1;i>=0;i--)
	{
		if(mp.find(v[i])==mp.end())
		{
			cnt++;
			mp[v[i]]++;
		}
		else{
			break;
		}
	}
	cout<<n-cnt<<ln;
   
}

  

int main()
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
