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
int bs(vector<int>&v,int x)
{

int l=0,r=v.size()-1,idx=0,mid;
while(l<=r)
{
mid=(l+r)/2;
if(x <= v[mid])
{
	idx=mid;
	r=mid-1;
}
else{
	l=mid+1;
}


}
return idx;


}
void solve() 
{
	int n;cin>>n;
    vector<int>v(n),pre(n);
    FOR(i,n) cin>>v[i];
   

    pre[0]=v[0];
    for(int i=1;i<n;i++)
    {
    	pre[i]=pre[i-1]+v[i];
    	//cout<<pre[i]<<" ";
    }
    int q;
    for(cin>>q;q--;)
    {
    	int x;cin>>x;
    	cout<<bs(pre,x)+1<<ln;
    	//cout<<lower_bound(pre.begin(),pre.end(),x)-pre.begin()+1;

    }

}

    

 int32_t main ()
 {
   ios::sync_with_stdio(0); 
 
        solve();
     
    return 0;
}
