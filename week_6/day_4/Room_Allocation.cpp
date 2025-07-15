#include "bits/stdc++.h"
using namespace std;

#define int long long

void solve(int t)
{
    int idx, n;
    cin >> idx >> n;
    vector<vector<tuple<int, string, string>>> rooms(idx + 1);  

    for (int i = 0; i < n; i++)
    {
        int roll, room;
        string name, gender;
        cin >> roll >> name >> room >> gender;
        rooms[room].push_back(make_tuple(roll, name, gender));
    }

   
    for (int i = 1; i <= idx; i++)
{
    sort(rooms[i].begin(), rooms[i].end(), [](const auto& a, const auto& b) {
        return get<0>(a) < get<0>(b);
    });
}

    int q;
    cin >> q;

    cout << "Case #" << t << ":" << '\n';

    
    for (int z = 1; z <= q; z++)
    {
        int room;
        cin >> room;
        cout << "Query #" << z << ":" << '\n';
        if (rooms[room].empty())
        {
            cout << "No Student" << '\n';
        }
        else
        {
            for (const auto& student : rooms[room])
            {
                cout << get<0>(student) << " " << get<1>(student) << " " << get<2>(student) << '\n';
            }
        }
    }
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t)
    {
        solve(t);
    }
    return 0;
}
