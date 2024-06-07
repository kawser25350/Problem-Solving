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



int bs1(int a,vector<int>&v)
{
    int l=0,r=v.size()-1,idx=-1,mid;

    while(l<=r)
    {
        mid=(l+r)/2;
        if(v[mid]>=a)
        {
            idx=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }

    }
   return idx;
}
int bs2(int b,vector<int>&v)
{
    int l=0,r=v.size()-1,mid,idx=-1;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(v[mid]<=b)
        {
            idx=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return idx;
}

void solve() 
{
    int n;cin>>n;
    vector<int>v(n);
    FOR(i,n) cin>>v[i];

sort(v.begin(),v.end());

       int q;cin>>q;
       while(q--)
       {
        int a,b;cin>>a>>b;
        int x=bs1(a,v);
          int y=bs2(b,v);
        if(x==-1 || y==-1 )
        {
            cout<<"0"<<ln;
        }
        else {
            cout<<(y-x)+1<<ln;
        }
        }
        
}

    

 int32_t main ()
 {
   ios::sync_with_stdio(0); 
    cin.tie(NULL); 
   
        solve();
     
    return 0;
}
