

/*
 * Author: Kawser Ahmmed
 * File:   C_Robin_Hood_in_Town.cpp
 */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ull unsigned long long
#define lld long double
#define mod 1000000007
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
#define vi vector<long long>
#define pi pair<long long,long long>
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(),x.rend()
#define PB push_back
#define POB pop_back
#define MP make_pair
#define endl '\n'
#define fast_code  ios::sync_with_stdio(0);  cin.tie(NULL);

// Debugger
#define printarr(arr) for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) cout<<arr[i]<<" "; cout<<'\n';
#define debug(x) cout<<#x<<" = "; _print(x); cout<<'\n';

// _print functions
void _print(ll x){ cout << x; }  // Fixed typo here
void _print(int x){ cout << x; }  
void _print(double x){ cout << x; }
void _print(string x){ cout << x; }
void _print(char x){ cout << x; }
void _print(bool x){ cout << (x ? "true" : "false"); }


template<class T>void _print(vector<T> v){ cout << "[ "; for(T i : v){ _print(i); cout << " "; } cout << "]"; }
template<class T>void _print(set<T> v){ cout << "[ "; for(T i : v){ _print(i); cout << " "; } cout << "]"; }
template<class T>void _print(unordered_set<T> v){ cout << "[ "; for(T i : v){ _print(i); cout << " "; } cout << "]"; }
template<class T, class V>void _print(pair<T,V> p){ cout << "{"; _print(p.first); cout << ", "; _print(p.second); cout << "}"; }
template<class T, class V>void _print(map<T,V> m){ cout << "[ "; for(auto i : m){ _print(i); cout << " "; } cout << "]"; }
template<class T, class V>void _print(unordered_map<T,V> um){ cout << "[ "; for(auto i:um){ _print(i); cout << " "; } cout << "]"; }

//pbds
template <typename T>using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const ll mx=1e16;
void solve(int t)
{
    ll n;
    cin >> n;
   
    vi v(n);
    ll sum = 0;
   
    FOR(i, n) {
        cin >> v[i];
        sum += v[i];
    }

    sort(all(v));

    auto ok = [&](ll x) {
       ll newsum=sum + x;

        long double halfavg =(1.0 * newsum) /(n*2.0); // jehetu avg ar half caise so (n *2.0) kore tarpor divide korsi
        int cnt = 0;

        if (v[n - 1] + x < (long double)halfavg) cnt++;

        for (int i = 0; i < n - 1; i++) {

            cnt += (v[i] < (long double) halfavg ? 1 : 0);
        }

        ll half=1ll*n/2;

        return cnt > half;
    };



    ll l = 0, r = 1ll*mx ,ans = -1,mid;

    while (l <= r) {
       mid = l+(r-l) / 2;
        if (ok(mid)) {
            // debug(mid)
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout<<ans<<endl;
}

int main()
{
    fast_code
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        solve(t);
    }

    return 0;
}
