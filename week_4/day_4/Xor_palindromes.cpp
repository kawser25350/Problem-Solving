#include <iostream>
#include <string>
using namespace std;

#define F0R(i, n) for(int i = 0; i < n; ++i)
#define nl '\n'

void solve() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    int lo = 0;
    for (int i = 0; i < N/2; ++i) {
        if (S[i] != S[N-i-1]) 
            lo++;
    }
    for (int i = 0; i < N + 1; ++i) {
        if (i < lo || i > N - lo) {
            cout << 0;
        } else if (N % 2 == 0 && i % 2 != lo % 2) {
            cout << 0;
        } else {
            cout << 1;
        }
    }
    cout << nl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}
