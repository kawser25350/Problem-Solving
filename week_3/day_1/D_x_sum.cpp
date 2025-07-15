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
#define     YES                             printf("YES\n")
#define     Yes                             printf("Yes\n")
#define     NO                              printf("NO\n")
#define     No                              printf("No\n")


ll sum(int i,int j,int n,int m,vector<vector<ll>>&arr)
{
	ll sum=0;
	sum+=arr[i][j];
	int dd1=i+1;
	int dd2=j+1;

	while(dd1<n && dd2<m)
	{
     sum+=arr[dd1][dd2];
     dd1++;
     dd2++;
	}
  int  du1=i-1;
   int du2=j-1;
   while(du1>=0 && du2>=0)
   {
   	sum+=arr[du1][du2];
   	du1--;
   	du2--;
   }
   int ru=i-1;
   int rd=j+1;
   while(ru>=0 && rd <m)
   {
   	sum+=arr[ru][rd];
   	ru--;
   	rd++;
   }
int lu=i+1;
int ld=j-1;
while(lu<n && ld>=0)
{
	sum+=arr[lu][ld];
	lu++;
	ld--;
}

   return sum;
}
void solve()
{
	ll n,m;
	cin>>n>>m;


	 vector<vector<ll>> arr(n, vector<ll>(m));

	FOR(i,n)
	{
		FOR(j,m)
		{
			cin>>arr[i][j];

		}
	} 

ll ans=0;

FOR(i,n)
FOR(j,m)
ans=max(ans,sum(i,j,n,m,arr));

cout<<ans<<'\n';


}

int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(NULL); 
    int T; 
    cin >> T; 
    while (T--) { 

        solve();
    } 
    return 0; 
} 