#include <iostream>
using namespace std;

#define ln '\n'
#define int long long

void solve(int t) {
    int a, b, n, s;
    cin >> a >> b >> n >> s;

    int coin_1 = (a * n);
    int coin_2 = b * 1;

    if(s%n>b || coin_1+coin_2<s)
    {
        cout<<"NO"<<ln;
    }
    else{
        cout<<"YES"<<ln;
    }
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        solve(t);
    }
    return 0;
}
