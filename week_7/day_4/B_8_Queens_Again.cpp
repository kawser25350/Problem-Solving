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



 bool valid(int x,int y)
 {
    if( (x>=0 && y>=0) && (x<8 && y<8) )
    {
        return true;
    }
    else{
        return false;
    }

 }

void solve(int t) 
{
     bool vis[8][8];
     memset(vis,false,sizeof(vis));
    vector<pair<int,int>>path={{0,-1},{0,1},{-1,0},{+1,0},{-1,1},{1,1},{-1,-1},{+1,-1}};

bool ok=true;
    string ch;
    for(int i=0;i<8;i++)
    {
        cin>>ch;
        
        int x,y;
        x=ch[0]-'A';
        y=ch[1]-'0';
        y-=1;
        //cout<<x<<y<<" ";
        if(vis[x][x])
        {
            ok=false;
           
        }else{
             vis[x][y]=true;
        }
 
   
   for(auto c:path)
   {

      int sx=x+c.first, sy=y+c.second;
     //cout<<c.first<<" "<<c.second<<ln;

while(valid(sx,sy))
{
    if(vis[sx][sy])
    {
      ok=false;

    }

    sx+=c.first;
    sy+=c.second;
    
}
      
   }


    }
    if(ok)
    {
        cout<<"Valid"<<ln;
    }
    else{
        cout<<"Invalid"<<ln;
    }

    
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
