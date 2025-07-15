/* Author: Kawser Ahmmed
 * 2024
 * 
 */
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
#define vi vector<int>
#define pi pair<int, int>
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
#define ln '\n';
#define fast_code  ios::sync_with_stdio(0);  cin.tie(NULL);




int32_t main()
{
    fast_code
    int n,k;cin>>n>>k;
      vi div;

      for(int i=1;i*i<=n;i++)
      {
        if(n%i==0)
        {
            div.push_back(i);
            if(i!=(n/i))
            {
                div.push_back(n/i);
            }
        }
      }
      sort(all(div));
    
    if(k>div.size())
    {
        cout<<"-1";

    }
    else{
        cout<<div[k-1]<<ln;
    }
      
        
    }
    

   

