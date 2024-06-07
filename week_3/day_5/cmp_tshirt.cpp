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
map<char,int>mp;
char X = 'X', L = 'L', M = 'M', S = 'S';
mp[X]=4;
mp[L]=3;
mp[M]=2;
mp[S]=1;
   string a,b;
   cin>>a>>b;

   if(a.back()==b.back())
   {
   	if(a.back()=='S')
   	{

   		if(a.size()==b.size())
        {
        	cout<<"="<<ln;
        }
        else if(a.size() < b.size())
        {
        	cout<<">"<<ln;
        }
        else{
        	cout<<"<"<<ln;
        }

   	}
      else{  if(a.size()==b.size())
        {
        	cout<<"="<<ln;
        }
        else if(a.size() < b.size())
        {
        	cout<<"<"<<ln;
        }
        else{
        	cout<<">"<<ln;
        }
}
   }

   else if(mp[a.back()] < mp[b.back()])
   {
      cout<<"<"<<ln;
   }
   else{
   	cout<<">"<<ln;
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
