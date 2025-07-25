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
   int n;
   cin>>n;
   string a;
   cin>>a;
 
 int sum=0;
 vector<int>ans;
   for(int i=0;i<n;i++)
   {
    int L=i;
    int R=n-i-1;
    if(a[i]=='L')
      {
        sum+=L;
        if(R>L) ans.push_back(R-L);
     }
    if(a[i]=='R'){
        sum+=R;
         if(L>R) ans.push_back(L-R);


  }
}
        sort(ans.begin(), ans.end(), greater<long long>());
      
 for (int i = 0; i < n; i++)
        {
            if(i < ans.size())
                sum += ans[i];
            cout << sum << " ";
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