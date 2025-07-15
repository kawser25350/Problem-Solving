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
typedef vector<long long> vi; 
typedef pair<long long, long long> pi; 
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
void solve(int t) {
    char x;
    vector<pair<char,int>>up,lw;
    string ac;cin>>ac;

    for(int i=0;i<ac.size();i++)
    {
        if (ac[i] >= 'A' && ac[i] <= 'Z') {
            up.push_back({ac[i], i});
        } 
        else if (ac[i] >= 'a' && ac[i] <= 'z') 
        {
            lw.push_back({ac[i],i});
        }
    }

     
    // for(auto c:up)
    // {
    //     cout<<c.first;
    // }
    // cout<<" ";
    // for(auto c:lw)
    // {
    //     cout<<c.first;

    // }
    // cout<<ln;

    vector<pair<char,int>> upans,lwans;

    for(int i=0;i<up.size();i++)
    {
        if(up[i].first == 'B' && !upans.empty())
        {
            upans.pop_back();
            
        }
        else if(up[i].first !='B')
        {
            upans.push_back({up[i].first,up[i].second});
        }
    }

    for(int i=0;i<lw.size();i++)
    {
        if(lw[i].first == 'b' && !lwans.empty())
        {
            lwans.pop_back();
            
        }
        else if(lw[i].first !='b')
        {
            lwans.push_back({lw[i].first,lw[i].second});
        }
    }

    unordered_map<int,int>mp;

  for(auto c:upans)
  {
    mp[c.second]=1;
    // cout<<c.first;
  }
  for(auto c:lwans)
  {
    mp[c.second]=1;
    // cout<<c.first;
  }
  //cout<<ln;

for(int i=0;i<ac.size();i++)
{
    if(mp[i]==1)
    {
        cout<<ac[i];
    }
}
cout<<ln;


 


}
    

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
