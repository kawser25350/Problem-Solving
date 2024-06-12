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
typedef vector<long long> vi; 
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

int inversion(vector<int>&v)
{
    int n=v.size();
    int one=0,ans=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==1)
        {
           one++;
        }
        else{
            ans+=one;
        }

    }
    return ans;
}
void solve(int t) 
{

    int n;cin>>n;
    vi v(n);
    FOR(i,n)cin>>v[i];

    int ans=inversion(v);

    for(int i=0;i<n;i++)
    {
        if(v[i]==0)
        {
            v[i]=1;
            ans=max(ans,inversion(v));
            v[i]=0;
            break;
        }
    }

    for(int i=n-1;i>=0;i--)
    {
        if(v[i]==1)
        {
            v[i]=0;
            ans=max(ans,inversion(v));
            v[i]=1;
            break;
        }
    }

    
cout<<ans<<ln;
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
