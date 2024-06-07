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


void solve() 
{
    ll n; 
    cin >> n;
    string a;
    unordered_map<string,int> mp;
    stack<string> st;
    while(n--)
    {
        cin >> a;
        st.push(a);
    }

    while(!st.empty())
    {
    	string x=st.top();
        if(mp.find(x) == mp.end())
        {
            cout <<x[x.size()-2]<<x.back();
            mp[x]++;
        }
        st.pop();
    }
}

 

int main()
 {
   ios::sync_with_stdio(0); 
    cin.tie(NULL); 
    // int T;
    // cin>>T;

    // for(int t=1;t<=T;++t)
    //  {
        solve();
    //}
    return 0;
}
