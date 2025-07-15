/*
 * Author: Kawser Ahmmed
 * Date:   2024-07-10
 * Time:   13:33:14
 * File:   D_Divide_and_Equalize.cpp
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
    int x;

    map<int,int>mp;

    for(int i=0;i<n;i++)
    {
            cin>>x;
            
            for(int i=2;i*i<=x;i++)
            {
                if(x%i==0)
                {
                    while(x%i==0)
                    {
                        x/=i;
                        mp[i]++;
                    }
                }
            }
            if(x>1)
            {
                mp[x]++;
            }
        
    }

    for(auto c:mp) 
    {
        if(c.S%n!=0)
        {
            cout<<NO<<ln;
            return;

        }
    }
    cout<<YES<<ln;
   
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
