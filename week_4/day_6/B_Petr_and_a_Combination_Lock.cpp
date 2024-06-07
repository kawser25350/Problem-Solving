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



    

 int32_t main ()
 {
   ios::sync_with_stdio(0); 
    cin.tie(NULL); 
    int T;
    cin>>T;
    vector<int>v(T);
    FOR(i,T) cin>>v[i];

    int sum=0;
    bool notfnd=true;
   
   for(int i=0;i<(1<<T);i++)
   {
   	sum=0;
   	for(int j=0;j<T;j++)
   	{
   		
   		if((i>>j)&1)
   		{
            sum+=v[j];
   		}
   		else{
   			sum-=v[j];
   		}

   	}
   
   	if(sum%360==0)
   	{
   		cout<<YES<<ln;
   		notfnd=false;
   		break;
   	
   	}
   	    
   }
if(notfnd)cout<<NO<<ln;


    
    return 0;
}
