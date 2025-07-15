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


void solve()
{
   int n,x;
   cin>>n;
   
  int arr[n+1][n];

   map<int,int>mp;
   for(int i=1;i<=n;i++)
   {
    for(int j=1;j<n;j++)
    {
        cin>>arr[i][j];
         if(j==n-1)
         {
            mp[arr[i][j]]++;
         }
    }
   }
vector<int>ans;

for(int i=1;i<=n;i++)
{
   if(mp[arr[i][n-1]]==1)
   {
      for(int j=1;j<n;j++)
      {
         ans.push_back(arr[i][j]);
      }
      
   }
}

for(int i=1;i<=n;i++)
{
   if(mp[arr[i][n-1]] == n-1)
   {
      ans.push_back(arr[i][n-1]);
      break;
   }
}
   for(int c:ans)
   {
      cout<<c<<" ";
   }
    cout<<'\n';
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