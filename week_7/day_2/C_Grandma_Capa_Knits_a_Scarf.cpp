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
#define all(x) x.begin(),x.end()
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

void solve(int t) 
{
    int n;cin>>n;
    string a;cin>>a;
int l,r,cnt,flag,res=1e8;

 for(int i=0;i<26;i++)
{
    cnt=0,flag=0;
             
    for( l=0,r=n-1;l<r;)
    {
      if(a[l]!=a[r])
      {
        if(a[l]=='a'+i)
        {
            l++;
            cnt++;
        }
        else if(a[r]=='a'+i)
        {
            r--;
            cnt++;
        }
        else{
            flag=1;
            break;
        }
      }
      else{
        l++;
        r--;
      }
      

    }
   if(flag==0)
      {
        res=min(res,cnt);

      }
}
if(res==1e8)
{
    cout<<"-1"<<ln;
    return;
}
cout<<res<<ln;

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
