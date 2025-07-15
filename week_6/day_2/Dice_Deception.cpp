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

void solve(int t) 
{
    int n,k;cin>>n>>k;
    int arr[n];
    FOR(i,n)cin>>arr[i];

    sort(arr,arr+n);
    int sum=0;
    FOR(i,n)
    {
        if(k>0 && arr[i]<4)
        {
            if(arr[i]==1)
            {
                sum+=6;
            }
            if(arr[i]==2)
            {
                sum+=5;
            }
            if(arr[i]==3)
            {
                sum+=4;
            }
            k--;
        }
        else{
            sum+=arr[i];
        }

    }
    cout<<sum<<ln;


   
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
