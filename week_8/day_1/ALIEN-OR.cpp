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
    int n,k;cin>>n>>k;
    vector<int>bit(k,0);
   
    while(n--)
    {
        string a;cin>>a;
        int pos=0,cnt=count(all(a),'1');

        if(cnt==1)
        {
            for(int j=k-1;j>=0;j--)
            {
                if(a[j]=='1')
                {
                    bit[pos]=1;
                    break;
                }
                pos++;

            }

        }

    }

    for(int i=0;i<k;i++)
    {
         if(bit[i]==0)
         {
            cout<<"NO"<<ln;return;
         }
    }

    cout<<"YES"<<ln;
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
