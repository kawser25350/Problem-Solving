#include <bits/stdc++.h>
#define fori(i, s, e) for (long long int i = s; i < e; i++)
#define forei(i, s, e) for (long long int i = s; i <= e; i++)
#define ford(i, s, e) for (long long int i = s; i > e; i--)
#define fored(i, s, e) for (long long int i = s; i >= e; i--)
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, l;
        cin >> a >> b >> l;
        vector<ll> divisors, aux1, aux2;
        for (ll i = 1; i * i <= l; i++)
        {
            if (l % i == 0)
            {
                divisors.push_back(i);
                if ((l / i) != i)
                    divisors.push_back(l / i);
            }
        }
        for (ll i = 0; i <= 20; i++)
        {
            ll x = pow(a, i);
            if (x <= 1e6)
            {
                aux1.push_back(x);
            }
            else
                break;
        }

        for (ll i = 0; i <= 20; i++)
        {
            ll x = pow(b, i);
            if (x <= 1e6)
            {
                aux2.push_back(x);
            }
            else
                break;
        }
        ll cnt = 0;
        for (auto d : divisors)
        {
            bool flag = false;
            for (auto v1 : aux1)
            {
                for (auto v2 : aux2)
                {
                    if ((d * v1 * v2) == l)
                    {
                        cnt++;
                        flag = true;
                        break;
                    }
                }
                if (flag)
                    break;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}