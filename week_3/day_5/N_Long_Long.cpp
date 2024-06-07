#include <iostream>
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


void solve(int t) {
    int n;
    cin >> n;
    ll sum = 0;
    vector<ll> v(n);
    
   
    FOR(i, n) {
        cin >> v[i];
        sum += abs(v[i]);
    }

    bool seg = false;
    int op = 0;

     ll seg_sum=0;

    FOR(i, n) {
        
        if (v[i] <= 0) 
        {
            seg_sum+=abs(v[i]);
           
            if (!seg)
             {
                seg = true;
            }
        }

        if (v[i] > 0 || i == n - 1) 
        {
   
            if (seg) 
            {
                seg = false;
                if(seg_sum>0)
                {
                    op++;
                   seg_sum=0;
                }
                
            }
        }
    }

   
    cout << sum << " " << op << ln;
}

int main() {
    int t;
    cin >> t;
    for(;t--;){
         solve(t); 
    }
   
    return 0;
}
