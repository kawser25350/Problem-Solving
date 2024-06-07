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



 int32_t main ()
 {
   ios::sync_with_stdio(0); 
    cin.tie(NULL); 
    int n,t;cin>>n>>t;
    vector<int>v(n);
    FOR(i,n)cin>>v[i];

    auto ok=[&](long long mid)
    {
        int total=0;
        for (int i = 0;i < n;i++) {
            total += (mid / v[i]);
            if (total >= t) {
                return true;
            }
        }
        return false;
        };

    
    int l=1,r=1e18,mid,ans;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(ok(mid))
        {
            ans=mid;
           r= mid-1;

        }
        else{
            l=mid+1;
        }
    }
    cout<<ans<<ln;

    
    return 0;
}
