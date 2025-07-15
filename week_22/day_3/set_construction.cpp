
/*
 * Author: Kawser Ahmmed
 * File:   set_construction.cpp
 */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define int long long
#define ull unsigned long long
#define lld long double
#define mod 1000000007
#define INF 1000000000000000003

#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define vi vector<long long>
#define pi pair<long long,long long>
#define PB push_back
#define POB pop_back
#define MP make_pair
#define F first
#define S second
#define endl '\n'
#define fast_code ios::sync_with_stdio(0); cin.tie(NULL);

// Debugger
#define debug(x) cout<<#x<<"="; _print(x); cout<<'\n';

void _print(int x) { cout << x; }
void _print(double x) { cout << x; }
void _print(string x) { cout << x; }
void _print(char x) { cout << x; }
void _print(bool x) { cout << (x ? "true" : "false"); }

// pair
template<class T, class V> void _print(pair<T, V> p) { cout << "{"; _print(p.first); cout << ", "; _print(p.second); cout << "}"; }
// array
template<class T, size_t N> void _print(T (&arr)[N]) { cout << "[ "; for (size_t i = 0; i < N; i++) { _print(arr[i]); cout << " "; } cout << "]"; }
template<class T, size_t N, size_t M> void _print(T (&arr)[N][M]) { cout << "[ "; for (size_t i = 0; i < N; i++) { cout << "[ "; for (size_t j = 0; j < M; j++) { _print(arr[i][j]); cout << " "; } cout << "]\n"; } cout << "]"; }
// vector
template<class T> void _print(vector<T> v) { cout << "[ "; for (T i : v) { _print(i); cout << " "; } cout << "]"; }
template<class T> void _print(vector<vector<T>> vv) { cout << "[ "; for (vector<T> row : vv) { _print(row); cout << "\n"; } cout << "]"; }
// set
template<class T> void _print(set<T> s) { cout << "[ "; for (T i : s) { _print(i); cout << " "; } cout << "]"; } // For set
template<class T> void _print(unordered_set<T> us) { cout << "[ "; for (T i : us) { _print(i); cout << " "; } cout << "]"; }
template<class T> void _print(multiset<T> s) { cout << "[ "; for (T i : s) { _print(i); cout << " "; } cout << "]"; }
// map
template<class T, class V> void _print(map<T, V> m) { cout << "[ "; for (auto i : m) { _print(i); cout << " "; } cout << "]"; }
template<class T, class V> void _print(unordered_map<T, V> um) { cout << "[ "; for (auto i : um) { _print(i); cout << " "; } cout << "]"; }
//priority queue
template<class T> void _print(priority_queue<T> pq) { vector<T> v; while (!pq.empty()) { v.push_back(pq.top()); pq.pop(); } _print(v); }
template<class T> void _print(priority_queue<T, vector<T>, greater<T>> pq) { vector<T> v; while (!pq.empty()) { v.push_back(pq.top()); pq.pop(); } _print(v); }

// pbds
template <typename T>using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


int32_t main()
{
 fast_code


 int n,m;cin>>n>>m;
// max
 int tmpx=n-m+1;
 int mx=(tmpx*(tmpx-1))/2;

//min

 int a = n/m;    //size of small_team
 int b = a + 1;  //size of big_team

 int big =n%m; // number_of_big  team
 int small= m - big;   // number_of_small team

int mn = small * ((a*(a-1))/2) + big * ((b*(b-1))/2);

 cout<<mn<<' '<<mx<<endl;







 return 0;
}
