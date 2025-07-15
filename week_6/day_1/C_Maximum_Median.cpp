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
    int n,k;cin>>n>>k;
int x;
    vector<int>v(n);
 for(auto &v:v)cin>>v;
 sort(v.begin(),v.end());

//   for(auto c:v) cout<<c<<" ";

//   cout<<ln;

auto ok=[&](int mid)
{
    int op=0;
    for(int i=(n/2);i<n;i++)
    {
        op+=(v[i]<mid ?(mid-v[i]):0);
    }
    return op <= k;
};

int l=1,r=10e9,mid,ans=0;
while(l<=r)
{
    mid=l+(r-l)/2;
    if(ok(mid))
    {
        ans=mid;
       l=mid+1;
    }
    else{
        r=mid-1;
    }
}
cout<<ans<<ln;

   
}

    

 int32_t main ()
 {
   ios::sync_with_stdio(0); 
    cin.tie(NULL); 
    
        solve();
     
    return 0;
}
