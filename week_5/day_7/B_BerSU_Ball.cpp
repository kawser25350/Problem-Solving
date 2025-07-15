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

void solve() 
{
    int bn;cin>>bn;
    vector<int>boys(bn);
    FOR(i,bn) cin>>boys[i];
    
    int gn;cin>>gn;

    vector<int>girls(gn);
     FOR(i,gn) cin>>girls[i]; 

     sort(boys.begin(),boys.end());
sort(girls.begin(),girls.end());
    bool paired[111]={false};
    int cnt=0;

for(int i=0;i<bn;i++)
{
    for(int j=0;j<gn;j++)
    {
       if(!paired[j] && abs(boys[i]-girls[j])<=1)
       {
        cnt++;
        paired[j]=true;
        break;
       }
    }

}
cout<<cnt<<ln;

}

 int32_t main ()
 {
   ios::sync_with_stdio(0); 
    cin.tie(NULL); 
    
        solve();
     
    return 0;
}
