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
    FOR(i,n)cin>>v[i];


auto ok=[&](int k)
{
    multiset<int>ml;
    
    for(auto c:v)
    {
        ml.insert(c);
    }
    for(int i=1;i<=k;i++)
    {
        if(ml.empty()) return false;

        int req=k-i+1;
        auto rem = ml.upper_bound(req);
        if(rem == ml.begin()) return false;
        rem--;
        ml.erase(rem);


        //bob move;
        if(!ml.empty())
        {
            int ad=(*ml.begin())+req;
             ml.erase(ml.begin());
             ml.insert(ad);
        }

    }
    return true;
};





    int l=1,r=n,mid,ans=0;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(ok(mid))
        {
            l=mid+1;
            ans=mid;
        }
        else{
            r=mid-1;
        }
    }
   cout<<ans<<ln;
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
