
/*
 * Author: Kawser Ahmmed
 * Date:   --
 * Time:   ::
 * File:   inversion_count.cpp
 */
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
 
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
#define ln '\n'
#define fast_code  ios::sync_with_stdio(0);  cin.tie(NULL);

template<typename T>using pbds=tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
 

void solve(int t)
{
	int n;cin>>n;
	vi v(n);

	FOR(i,n)cin>>v[i];


int sum=0;
    pbds<int> st;

     FORR(i,n-1,0)
     {
     	sum+=st.order_of_key(v[i]);
     	st.insert(v[i]);

     }
     cout<<sum<<ln;

 
   
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