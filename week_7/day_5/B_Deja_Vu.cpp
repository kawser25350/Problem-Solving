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
#define YES "YES"
#define Yes "yes"
#define NO "NO"
#define No "No"
#define ln '\n';
#define int long long

void solve(int t) 
{
    int n, k;
    cin >> n >> k;
    vi v(n), p;
   map<int,int>mp;
    
    FOR(i, n) cin >> v[i];

    FOR(i,k)
    {
        int sr;cin>>sr;
        if(mp.find(sr)==mp.end())
        {
            p.push_back(sr);
            mp[sr]++;
        }
    }
   
   
    for(auto c:p)
    {
        if(c <=30 ){

        int x =  1<<c;

        for(int j = 0; j < n; j++) 
        {
            if(v[j] % x == 0) 
            {
                v[j] += 1<<(c-1);
            }
        }
        
        }
        
}
 FOR(i, n) 
    {
        cout << v[i] << " ";
    }
    cout << ln;
    }


int32_t main() 
{
    ios::sync_with_stdio(0); 
    cin.tie(NULL); 
    int T;
    cin >> T;

    for(int t = 1; t <= T; ++t) 
    {
        solve(t);
    }
    return 0;
}
