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
const int N=(1<<15);
vector<int>palin;

void generate_palindrome()
{
    for(int i=1;i<N;i++)
    {
      string a=to_string(i);
    int len=a.size();
    bool ok=true;
    for(int j=0;j<len;j++)
    {
        if(a[i]!=a[len-i-1])
        {
            ok=false;
            break;
        }
    }
       if(ok) palin.push_back(i);

    }
}
void solve(int t) 
{
    int n;cin>>n;
    vector<int>v(n);
    map<int,int>mp;
    FOR(i,n)
    {
        cin>>v[i];
        mp[v[i]]++;
    }

    for(auto c:mp) cout<<c.first;
   
}

    

int main()
 {

    generate_palindrome();

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
