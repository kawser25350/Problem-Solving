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
    int prev;cin>>prev;
     cout<<'1';
int first=prev;
int sc=0;
bool f=true;
    for(int i=1;i<n;i++)
    {
        int ch;cin>>ch;

        if(ch >= prev && f)
        {
            cout<<"1";
            prev=ch;
        }
     else if(f && first >= ch)
     {
        sc=ch;
        cout<<'1';
        f=false;

     }
     else if(first>= ch && sc<=ch && !f)
     {
        cout<<'1';
        sc=ch;
       
     }
     else{
        cout<<'0';
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
