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

void solve(int t) 
{
   int n;
   cin>>n;
int chef=0,chefin=0;
string a,b;
cin>>a>>b;

   FOR(i,n)
   {
       if(a[i]==b[i])
        continue;
       else if(a[i]=='R' && b[i]=='S'|| a[i]=='S' && b[i]=='P'||a[i]=='P' && b[i]=='R')
       {
       chef++;
       }
       else {
       	chefin++;
       }
   }


   if(chef>=chefin)
   { cout<<"0"<<ln;
    }
   else {
   	cout<<chefin-chef<<ln;
   }
}

    

int main()
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
