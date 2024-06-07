#include<bits/stdc++.h>

using namespace std;

class aci {
public:
    int strt;
    int fnsh;

    aci(int a, int b) {
        strt = a;
        fnsh = b;
    }
};

class compare {
public:
    bool operator()(aci a, aci b) {
        return a.fnsh > b.fnsh; // ascending order
    }
};

void solve(priority_queue<aci, vector<aci>, compare>& pq) {
    int cnt = 1;
    int i = 1;

    aci ta = pq.top();
    cout << "selected-" << i << " is " << ta.strt << " " << ta.fnsh << "\n";
    pq.pop();

    while (!pq.empty()) {
        i++;
        aci curac = pq.top();

        if (ta.fnsh <= curac.strt) {
            cnt++;
            cout << "selected-" << i << " is " << curac.strt << " " << curac.fnsh << "\n";
            ta = curac;
        }
        pq.pop();
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    cin >> n;

    priority_queue<aci, vector<aci>, compare> pq;

    for (int i = 0; i < n; i++) {
        int strt, fnsh;
        cin >> strt >> fnsh;
        pq.push(aci(strt, fnsh));
    }

    // while (!pq.empty()) {
    //     cout << pq.top().strt << " " << pq.top().fnsh << '\n';
    //     pq.pop();
    // }
    solve(pq);

    return 0;
}
