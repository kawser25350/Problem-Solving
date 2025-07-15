/*
 * Author: Kawser Ahmmed
 * Date:   2024-07-12
 * Time:   02:56:13
 * File:   C_Paint_the_Array.cpp
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

void solve(int t)
{
    int n;cin>>n;
    vi v(n);
    FOR(i,n)cin>>v[i];

    int gcd1=0,gcd2=0;

     FOR(i,n)
     {
        if(i%2==0)
        {
            gcd1 =__gcd(gcd1,v[i]);
        }
        if(i&1)
        {
            gcd2 =__gcd(gcd2,v[i]);
        }
     }
     bool op1=true,op2=true;

     FOR(i,n)
     {
        if(i&1)
        {
            if(v[i]%gcd1==0)
            {
                op1 &=false;
               
            }

        }
        if(i%2==0){
            if(v[i]%gcd2==0)
            {
                op2 &=false;
            }
        }
     }

     if(op1)
     {
        cout<<gcd1<<ln;
     }
     else if(op2){
        cout<<gcd2<<ln;
     }
     else{
        cout<<"0"<<ln;
     }






   
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
