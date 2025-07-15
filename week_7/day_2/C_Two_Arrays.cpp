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
#define all(x) x.begin(),x.end()
#define INF 1000000000000000003 
typedef long long int ll; 
typedef vector<long long> vi; 
typedef pair<long long, long long> pi; 
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
    vi v(n),v1(n);
    FOR(i,n)cin>>v[i];
    FOR(i,n)cin>>v1[i];

sort(all(v1));
sort(all(v));

    if(v==v1)
    {
       cout<<"YES"<<ln;
       return;
    }
    for(int i=0;i<n;i++)
    {
       if(v[i]!=v1[i] && v[i]+1 == v1[i])
        {
            v[i]+=1;     
        }
    }

    if(v==v1)
    {
       cout<<"YES"<<ln;
       return;
    }
    cout<<"NO"<<ln;
     



   
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
