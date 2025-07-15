/* Author: Kawser Ahmmed
 * 2024
 * 
 */
#include <bits/stdc++.h> 
using namespace std; 
#define mod 1000000007 
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
#define INF 1000000000000000003 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 

void solve(int t) 
{
   int n;
   cin >> n;
   vector<pair<ll,ll>> v1(n), v2(n), v3(n);
   FOR(i,n) 
   {
    cin >> v1[i].first;
    v1[i].second = i;
   }
   FOR(i,n) 
   {
    cin >> v2[i].first;
    v2[i].second = i;
   }
   FOR(i,n) 
   {
    cin >> v3[i].first;
    v3[i].second = i;
   }
   ll mxsum = -1;

   sort(v1.begin(), v1.end(), greater<pair<ll,ll>>());
   sort(v2.begin(), v2.end(), greater<pair<ll,ll>>());
   sort(v3.begin(), v3.end(), greater<pair<ll,ll>>());

   FOR(i, 3)
   {
       FOR(j, 3)
       {
           FOR(k, 3)
           {
               if (v1[i].second != v2[j].second && v2[j].second != v3[k].second && v3[k].second != v1[i].second) {
                   ll current_sum = v1[i].first + v2[j].first + v3[k].first;
                   mxsum = max(mxsum,current_sum);
               }
           }
       }
   }

   cout << mxsum << endl;
}

int main()
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
