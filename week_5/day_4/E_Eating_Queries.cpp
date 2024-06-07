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

int bs(int a,vector<int>&pre)
{
   int l=0,r=pre.size()-1,mid,idx=100;

   while(l<=r)
    {
    mid=(l+r)/2;
    if(pre[mid]>= a)
    {
    	idx=mid;
    	r=mid-1;
    }else{
    	l=mid+1;
    }

   }
   return idx;



}

void solve(int t) 
{
	int n,q;cin>>n>>q;
     vector<int>v(n),pre(n);
     
     FOR(i,n) cin>>v[i];
     sort(v.begin(),v.end(),greater<int>());

// FOR(i,n)cout<<v[i]<<" ";
// cout<<ln;

pre[0]=v[0];
//cout<<pre[0]<<" ";
for(int i=1;i<n;i++)
{
	pre[i]=pre[i-1]+v[i];
	//cout<<pre[i]<<" ";
}
// cout<<pre[n-1];
// cout<<ln;
     while(q--)
     {
     	int a;cin>>a;
     	
       if(a>pre[n-1])
       {
       	cout<<"-1"<<ln;
       }
       else{
       cout<<bs(a,pre)+1<<ln;
       }
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
