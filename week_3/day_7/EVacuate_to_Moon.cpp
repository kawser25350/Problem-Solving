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
   ll car,station,hour;
   cin>>car>>station>>hour;
   vector<ll>car_arry(car);
   vector<ll>station_arry(station);

   FOR(i,car) cin>>car_arry[i];
   FOR(i,station) cin>>station_arry[i];

   sort(car_arry.begin(),car_arry.end(),greater<int>());
   sort(station_arry.begin(),station_arry.end(),greater<int>());

   ll ans=0;
   FOR(i,min(car,station))
   {
   	ans+=min(car_arry[i],station_arry[i]*hour);
   }


 cout<<ans<<ln;
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
