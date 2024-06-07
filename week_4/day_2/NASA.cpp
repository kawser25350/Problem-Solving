
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
    for(int i=0;i<N;i++)
    {
      string a=to_string(i);
    int len=a.size();
    bool ok=true;

    for(int j=0;j<len/2;j++)
    {
        if(a[j]!=a[len-j-1])
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
    unordered_map<int,int>mp;
    FOR(i,n)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
ll ans=n;

    FOR(i,n)
    {
       FOR(j,palin.size())
        {
            int cur=(v[i]^palin[j]);

           
                ans+=mp[cur];
         
        }
    }

   cout<<ans/2<<ln;
}

    

int main()
 {


   ios::sync_with_stdio(0); 
       generate_palindrome();

    cin.tie(NULL); 
    int T;
    cin>>T;

    for(int t=1;t<=T;++t)
     {
        solve(t);
    }

    return 0;
}
