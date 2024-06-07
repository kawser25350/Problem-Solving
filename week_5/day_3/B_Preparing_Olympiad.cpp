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
    int n,l,r,x,ans=0;
    cin>>n>>l>>r>>x;


    vector<int>v(n);
    FOR(i,n) cin>>v[i];


    for(int i=0;i<(1<<n);i++)
    {
       // cout<<i<<" ";
        int sum=0,cnt=0;
         int maxsum = INT_MIN, minsum = INT_MAX;
        for(int j=0;j<n;j++)
        { 
    // cout<<((i>>j)&1);
            if((i>>j)&1)
            {
                    cnt++;
                 maxsum=max(maxsum,v[j]);
                 minsum=min(minsum,v[j]);
                 sum+=v[j];
             
                 //cout<<v[j]<<" ";
               
            }
        }
        //cout<<ln;
 int diff=abs(maxsum-minsum);
        if(cnt>=2 && sum>=l && sum<=r && diff>=x)
        {
            ans++;
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
