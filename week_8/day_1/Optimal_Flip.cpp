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
#define all(x) x.begin(),x.end()
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
    int n;cin>>n;
    vi v(n),oddsub;
    FOR(i,n)cin>>v[i];

    int total=1LL*((n*(n+1))/2);

      int cnt=0; 
    for(int i=0;i<n;i++)
    {
        if(v[i]&1)
        {
            cnt++;
        }
        else{
             if(cnt>0)
             {
                oddsub.push_back(cnt);
                  cnt=0;
             }
           
        }
    }

    if(cnt>0)
    {
        oddsub.push_back(cnt);
    }
    sort(all(oddsub));

    for(auto c:oddsub)
    {
       
       int sum=1LL*(c*(c+1))/2;
         total-=sum;
    }

    if(oddsub.size()>=0)
    {
        int cur=oddsub.back(); int mid=cur/2;

        if(cur&1)
        {
            mid++;
                total+=(1LL* mid*mid);
        }
        else{
              total+=1LL*mid*(mid+1);
        }
      
    }
    cout<<total<<ln;
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
