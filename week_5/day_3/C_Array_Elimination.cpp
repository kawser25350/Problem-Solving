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
  int n;cin>>n;
  vector<int>v(n);
  FOR(i,n) cin>>v[i];

  int bitcount[33]={0};

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<33;j++)
    {
      if((v[i]>>j)&1)
      {
        bitcount[j]++;

      }
    }
  }

  // for(int j=0;j<33;j++)
  //   {
  //     cout<<bitcount[j]<<" ";
  //  }


  for(int k=1;k<=n;k++)
  {
    bool ok=true;
    for(int i=0;i<33;i++)
    {
      if(bitcount[i]%k!=0)
      {
        ok=false;
      
      }
    }
    if(ok) cout<<k<<" ";

  }
  cout<<ln;
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
