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

void testcase()
{
    int tmpa,tmpb;
    int x;cin>>x;
    int b=1e4;
    for(int a=1;a<1e4;a++)
    {
       
        while(a*a*a+b*b*b>x)
           --b;

            if(b>0 && a*a*a+b*b*b==x)
            {
                tmpa=a;
                tmpb=b;
                cout<<"YES"<<ln;
                
                
                return;
            }

    }
    cout<<"NO"<<ln;
   

}



    

 int32_t main ()
 {
   ios::sync_with_stdio(0); 
    cin.tie(NULL); 
 
     int t;cin>>t;
     while(t--){
        testcase();
        }

    return 0;
}
