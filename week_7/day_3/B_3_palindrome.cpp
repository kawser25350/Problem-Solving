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

void solve() 
{
    int n;cin>>n;
    int check=1;
    for(int i=1;i<=n;i++)
    {
        if(check==1 || check==2)
        {
            cout<<'a';
            check++;
        }
        else if(check==3)
        {
            cout<<'b';
            check++;
        }
        else
        {
            cout<<'b';
            check=1;
        }

    }
    cout<<ln;
}

    

 int32_t main ()
 {
    
    
   ios::sync_with_stdio(0); 
    cin.tie(NULL); 
   
        solve();
     
    return 0;
}
