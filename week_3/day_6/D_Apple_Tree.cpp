/* Author: Kawser Ahmmed
 * 2024
 */
#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003LL
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
#define YES "YES"
#define Yes "Yes"
#define NO "NO"
#define No "No"

const int N = 2 * (1e5) + 5;

vector<ll> adj[N];
ll leaf[N];

void find_leaf(ll src, ll par) {
    leaf[src] = 0;
    for (ll ch : adj[src]) {
        if (ch == par) continue;
        find_leaf(ch, src);
        leaf[src] += leaf[ch];
    }
    leaf[src] = max(leaf[src], 1LL);
}

void solve(int t) {
    ll e, n;
    cin >> e;
    n = e - 1;

    for(int i=0;i<=e;i++) adj[i].clear();
    while (n--) {
        ll a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    find_leaf(1, -1);
    ll q;
    cin >> q;
    while (q--) {
        ll x, y;
        cin >> x >> y;
        cout << leaf[x] * leaf[y] << '\n';
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        solve(t);
    }
    return 0;
}
