

/*
 * Author: Kawser Ahmmed
 * File:   b_robin_helps.cpp
 */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ull unsigned long long
#define lld long double
#define mod 1000000007
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
#define vi vector<long long>
#define pi pair<long long,long long>
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(),x.rend()
#define PB push_back
#define POB pop_back
#define MP make_pair
#define ln '\n'
#define fast_code  ios::sync_with_stdio(0);  cin.tie(NULL);

// Debugger
#define printarr(arr) for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) cout<<arr[i]<<" "; cout<<'\n';
#define debug(x) cout<<#x<<" = "; _print(x); cout<<'\n';

// _print functions
void _print(ll x){ cout << x; }  // Fixed typo here
void _print(int x){ cout << x; }  
void _print(double x){ cout << x; }
void _print(string x){ cout << x; }
void _print(char x){ cout << x; }
void _print(bool x){ cout << (x ? "true" : "false"); }


template<class T>void _print(vector<T> v){ cout << "[ "; for(T i : v){ _print(i); cout << " "; } cout << "]"; }
template<class T>void _print(set<T> v){ cout << "[ "; for(T i : v){ _print(i); cout << " "; } cout << "]"; }
template<class T>void _print(unordered_set<T> v){ cout << "[ "; for(T i : v){ _print(i); cout << " "; } cout << "]"; }
template<class T, class V>void _print(pair<T,V> p){ cout << "{"; _print(p.first); cout << ", "; _print(p.second); cout << "}"; }
template<class T, class V>void _print(map<T,V> m){ cout << "[ "; for(auto i : m){ _print(i); cout << " "; } cout << "]"; }
template<class T, class V>void _print(unordered_map<T,V> um){ cout << "[ "; for(auto i:um){ _print(i); cout << " "; } cout << "]"; }

//pbds
template <typename T>using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve(int t)
{
	int n,k;cin>>n>>k;
    
    vi v(n);

   FOR(i,n) cin>>v[i];


   int ans=0,robin=0;



   FOR(i,n){

   	if(v[i]>=k)
   	{
   		robin+=v[i];
   	}
   else	if(v[i]==0 && robin>=1){
   	ans++;

   		robin-=1;
   	}

   }

   cout<<ans<<ln;
   
}
 
int main()
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