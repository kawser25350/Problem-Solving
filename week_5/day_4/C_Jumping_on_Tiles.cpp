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
    string a;
    cin >> a;

  vector<int>pos[26];
    vector<int>move;

    for (int i = 0; i < a.size(); i++)
    {
        pos[a[i] - 'a'].push_back(i);
       // cout<<a[i]<<" "<<(a[i]-'a')<<ln;
    }



    // for(int i=0;i<26;i++)
    // {
    //     cout<<char(i+'a')<<" ";
    //     for(int c:pos[i])
    //     {
    //         cout<<c<<" ";
    //     }
    //     cout<<ln;
    // }

    int i = a[0] - 'a';
    int j = a[a.size() - 1] - 'a';
    //cout<<i<<j<<endl;

  if(i>j)
  {
for(int k=i;k>=j;k--)
{
    for(int c:pos[k])
    {
        //cout<<c+1<<" ";
        move.push_back(c+1);

    }
}
}
else{

    for(int k=i;k<=j;k++)
   {
    for(int c:pos[k])
    {
        move.push_back(c+1);
    }
}

}





 cout<<abs(i-j)<<" "<<move.size()<<ln;

 for(int c:move)
 {
    cout<<c<<" ";
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
