/*
 * Author: Kawser Ahmmed
 * Date:   2024-07-01
 * Time:   18:36:21
 * File:   B_Different_Divisors.cpp
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

vi prime;
int N =100001;
vector<bool> boolprime(N + 1, true);
void sieve_of_eratosthenes(int N) {
    boolprime.assign(N + 1, true);
    for (int i = 2; i * i <= N; i++) {
        if (boolprime[i]) {
        
            for (int j = i + i; j <= N; j += i) {
                boolprime[j] = false;
            }
        }
    }
    for(int i=2;i<=N;i++)
    {
        if(boolprime[i])
        {
            prime.push_back(i);
        }
    }
}


int32_t main()
{
    fast_code
    sieve_of_eratosthenes(N);

    int t;cin>>t;
    while(t--)
    {

int d;cin>>d;
 bool afound=false,bfound=false;
int a,b,c;
FOR(i,prime.size())
{
    if(prime[i]-1 >=d && !afound)
    {
        afound=true;
        a=prime[i];
    }
    if(afound && prime[i]-a >=d )
    {
        b=prime[i];
        break;
    }
}
cout<<a*b<<ln;

 
}
   return 0;
}

