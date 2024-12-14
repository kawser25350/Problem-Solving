/*
 * Author: Kawser Ahmmed
 * Date:   2024-07-12
 * Time:   05:15:02
 * File:   Chef_and_Prime_Divisors.cpp
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

void primesieve(int n,vector<int>&pr)
{
	bool prime[n + 1];
	memset(prime, true, sizeof(prime));
	for (int p = 2; p * p <= n; p++) {
		if (prime[p] == true)
                {
		for (int i = p * p; i <= n; i += p)
		prime[i] = false;
		}
	}

	
	for (int p = 2; p <= n; p++)
		if (prime[p])
			pr.push_back(p);
}

void solve(int t)
{
   
}

int32_t main()
{
    vi prime;
    primesieve(10,prime);
   
   for(auto c:prime)
   {
    cout<< c<<" ";
   }
    

    // for (int t = 1; t <= T; ++t)
    // {
    //     solve(t);
    // }

    return 0;
}
