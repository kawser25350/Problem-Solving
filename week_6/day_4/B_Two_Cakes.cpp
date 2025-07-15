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
   int n,a,b;cin>>n>>a>>b;
   int ans=0;
   //for(int i=1;i<=min(a,b);i++)
   FORL(i,1,min(a,b))
   {
     int x=(a/i)+(b/i);
     if(x>=n)
     {
        ans=i;
     }
   }
   cout<<ans<<ln;

   
    return 0;
}
