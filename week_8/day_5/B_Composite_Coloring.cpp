/*
 * Author: Kawser Ahmmed
 * Date:   2024-07-01
 * Time:   17:29:20
 * File:   B_Composite_Coloring.cpp
 */

#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
#define vi vector<long long>
#define pi pair<long long,long long>
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
#define ln '\n'
#define fast_code  ios::sync_with_stdio(0);  cin.tie(NULL);

long long binpow(long long a, long long b) {
 long long res = 1;
 while (b > 0) {
   if (b & 1)
     res = res * a;
     a = a * a;
     b >>= 1;
  }
    return res;
}

vi prime={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
void solve(int t)
{
   int n;cin>>n;
   vi v(n);
   for(int i=0;i<n;i++)
   {
    cin>>v[i];
   }

   int x=1;
   for(auto c:prime)
   {
    bool flag=false;
     for(int i=0;i<n;i++)
     {
        if(v[i]%c==0)
        {
          v[i]=x;
          flag=true;
        }

     }
    if(flag)x++;
   }
   cout<<x-1<<ln;

   for(auto z:v)
   {
    cout<<z<<" ";
   }
cout<<ln;

}
    
   

   



int32_t main()
{
    fast_code
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t)
    {
        solve(t);
    }

    return 0;
}
