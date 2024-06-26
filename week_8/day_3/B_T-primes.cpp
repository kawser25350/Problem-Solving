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




set<int>st;

void solve(int t)
{
    int n;cin>>n;
    cout<<(st.find(n)!=st.end()?"YES\n":"NO\n");
    
   
}

int32_t main()
{
    fast_code
    sieve_of_eratosthenes();
    st.insert(4);
     for(int i=3;i<=1000000;i++)
     {
        if(boolprime[i])
        {
            st.insert(i*i);
        }
     }

    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t)
    {
        solve(t);
    }

    return 0;
}
