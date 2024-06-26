/* Author: Kawser Ahmmed
 * 2024
 * 
 */
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
#define vi vector<int>
#define pi pair<int, int>
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define PB push_back
#define POB pop_back
#define MP make_pair
#define YES "YES"
#define Yes "yes"
#define NO "NO"
#define No "No"
#define ln '\n';
#define fast_code  ios::sync_with_stdio(0);  cin.tie(NULL);

int N = 2e7;

vector<bool> boolprime(N + 1, true);

void sieve_of_eratosthenes()
{
    for (int i = 2; i * i <= N; i++)
    {
        if (boolprime[i])
        {
            for (int j = i + i; j <= N; j += i)
            {
                boolprime[j] = false;
            }
        }
    }
}

int lcm(int a,int b)
{
    return ((a /__gcd(a,b))*b);
}
void solve()
{
    int n,a,b,p,q,ans=0;
    cin>>n>>a>>b>>p>>q;

    
     ans += (n / a) * p;
    ans += (n / b) * q;

     ans -= (n / lcm(a, b)) * p;
    ans -= (n / lcm(a, b)) * q;

     ans += (n / lcm(a, b)) * max(p, q);

    cout<<ans<<ln;
  
    



  
}

int32_t main()
{
    fast_code
   

    // for (int t = 1; t <= T; ++t)
    // {
        solve();
    // }

    return 0;
}
