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
    int n,q;cin>>n>>q;
    map<int,int>presum;
    presum[0]=0;
     int check=0;
     int cumsum=0;
    for(int i=0;i<n;i++)
    {
        int el;cin>>el;
        check=max(check,el);
        cumsum+=el;
        presum[check]=cumsum;

    }
    // for(auto c:presum)
    // {
    //     cout<<c.second<<" "; 
    // }
    while(q--)
    {
        int x;cin>>x;

        auto it=presum.upper_bound(x);
        it--;
        cout<<it->second<<" ";
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
