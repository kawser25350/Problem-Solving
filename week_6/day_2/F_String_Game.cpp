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

void solve() 
{
    string a,b;
    cin>>a;
    cin>>b;
    // cout<<a<<b;
    int n=a.size(),m=b.size();
     int arr[n];

     FOR(i,n) cin>>arr[i];

     // FOR(i,n)cout<<arr[i]<<" "; 

     auto ok=[&](int mid)
     {
        vector<bool>bad(n+1);
        for(int i=0;i<mid;i++)
        {
            bad[arr[i]]=true;
        }
        bool found=false;
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==b[j] && !bad[i+1])
            {
                j++;
            }
            if(j==m)
            {
                found=true;
                break;;

            }
        }
        return found;
     };

     int l=0,r=n,mid,ans=0;
     
     while(l<=r)
     {
        mid=l+(r-l)/2;
       
        if(ok(mid))
        {
          ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
     }
     cout<<ans<<ln;
   
}

    

 int32_t main ()
 {
   ios::sync_with_stdio(0); 
    cin.tie(NULL); 
    
        solve();
     
    return 0;
}
