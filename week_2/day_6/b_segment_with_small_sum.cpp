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
#define     YES                             printf("YES\n")
#define     Yes                             printf("Yes\n")
#define     NO                              printf("NO\n")
#define     No                              printf("No\n")


void solve()
{
    ll n,s;
    cin>>n>>s;
    vector<ll>v(n);

FOR(i,n)cin>>v[i];



 ll sum=0;
 ll i=0,j=0;
ll ans=0;
 while(j<n)
 {
    sum+=v[j];
    if(sum<=s)
    {
        ans=max(ans,j-i+1);
  
    }
    else
    {
        sum-=v[i];
        i++;

    }
    j++;
 }
 cout<<ans<<'\n';


}

int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(NULL); 
    // int T; 
    // cin >> T; 
    // while (T--) { 

        solve();
    //} 
    return 0; 
} 