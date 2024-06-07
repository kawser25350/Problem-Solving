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
    int mo=1e9+7;
   int n;cin>>n;
   int v[n];
   for(int i=0;i<n;i++)
   {
    cin>>v[i];
   }
   int s=0;
   sort(v,v+n);
   for(int i=0;i<n;i++)
   {
    if(v[i]*s>v[i]+s)
    {
        s*=v[i];
        s%=mo;
    }else{
        s+=v[i];
        s%=mo;
    }
 

   }
      cout<<s<<ln;
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
