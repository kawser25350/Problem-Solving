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


void solve(int t) {
    int n, ans;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    if (n == 1) {
        cout << "0" << ln;
        return;
    }

    // case-1
    ans = v[n - 1] - v[0];

    // case-2
    for (int i = 0; i < n - 1; i++) {
        ans = max(ans, v[i] - v[i + 1]);
    }

    // case-3
    for (int i = 1; i < n; i++) {
        ans = max(ans, v[i] - v[0]);
    }

    // case-4
    for (int i = 0; i < n - 1; i++) {
        ans = max(ans, v[n-1] - v[i]);
     
    }

    cout << ans << ln;
}

    

int main()
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
