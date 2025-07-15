/* Author: Kawser Ahmmed
 * 2024
 * 
 */
#include "bits/stdc++.h" 
using namespace std; 
#define mod 1e9 + 7 
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
#define INF 1000000000000000003 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
#define F first 
#define S second 
#define PB push_back 
#define POB pop_back 
#define MP make_pair 
#define     YES      "YES"
#define     Yes    "yes"
#define     NO    "NO"
#define     No   "No"
#define    ln     '\n';
#define int long long 

void solve(int t) 
{
	int a,b,c;
	cin>>a>>b>>c;
	//cout<<a<<b<<c;
	int xa=a-1;

	int xb=abs(b-c)+abs(c-1);

	if(xa<xb)
	{
		cout<<1<<ln;
	}
	else if(xa==xb)
	{
		cout<<3<<ln;
	}
	else{
      cout<<2<<ln;
	}
   
}
// void solve(int t) {
//     int a, b, c;
//     std::cin >> a >> b >> c;
//     a--;
//     b = std::abs(b - c) + c - 1;
//     std::cout << (a < b ? 1 : a > b ? 2 : 3) << "\n";
// }

    

 int32_t main ()
 {
   ios::sync_with_stdio(0); 
    cin.tie(NULL); 
    int T;
    cin>>T;

    for(int t=1;t<=T;++t)
     {
        solve(t);
     }
    return 0;
}
