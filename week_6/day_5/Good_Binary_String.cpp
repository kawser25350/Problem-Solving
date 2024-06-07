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
   string a;cin>>a;
   // cout<<a<<ln;
char prev='0';
int cnt=0;

vector<int>ans;
   for(int i=0;i<n;i+=2)
   {
      if(a[i]!=a[i+1])
      {
         cnt++;
         if(a[i]!=prev)
         {
            ans.push_back(i);
            prev=a[i];
         }
         else{
            ans.push_back(i+1);
            prev=a[i+1];
         }
      }
    
      
   }
   cout<<cnt<<ln;
   for(auto& c:ans) cout<<c+1<<" ";
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
