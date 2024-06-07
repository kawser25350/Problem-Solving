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
    vi v(n),c(n);
  
    FOR(i,n)
    {
        cin>>v[i];
       // cout<<v[i]<<" ";

    }
 
FOR(i,n)
{
    cin>>c[i];
   // cout<<c[i];
}
int dif=-1;
bool ok=true;
FOR(i,n)
{
// if(v[i]<c[i])
// {
//     ok=false;
//     cout<<"NO"<<ln;
//     return;
// }
dif=max(dif,abs(v[i]-c[i]));
//cout<<dif<<ln;
}
for(int i=0;i<n;i++)
{
    if(v[i]<=0)
    {
        v[i]=0;
        continue;
    }
    v[i]-=dif;
}
FOR(i,n)
{
if(v[i]<=0)
{
    v[i]=0;
}

}
for(int i=0;i<n;i++)
{
    if(v[i]!=c[i])
    {
        cout<<"NO"<<ln;
        
        return;
    }
}
cout<<"YES"<<ln;
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
