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
   int n,k,tm;
   cin>>n>>k>>tm;
   vector<ll>v(n);
   FOR(i,n) cin>>v[i];

ll cons=0;

ll sum=0;
   FOR(i,n)
   {
       if(v[i]<=tm)
       {
         cons++;
       }

       if(v[i+1]>tm or i==n-1)
       {
         
        
              cons=cons-k+1;
            if(cons>0){

            sum+=(cons*(cons+1))/2;
         }
      
         cons=0;
       }
   }

   cout<<sum;

   cout<<ln;
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
