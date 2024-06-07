#include "bits/stdc++.h" 
using namespace std; 
#define MOD 1000000007 
#define F0R(i, c) for (int(i) = 0; (i) < (c); (i)++) 
#define F0RL(i, b, c) for (int(i) = (b); (i) <= (c); (i)++) 
#define F0RR(i, b, c) for (int(i) = (b); (i) >= (c); (i)--) 
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
#define YES "YES"
#define Yes "yes"
#define NO "NO"
#define No "No"
#define ln '\n'
#define int ll

signed main() {
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int t=1;
 cin>>t;
 while(t--){
  int n;
  cin>>n;

  vi a(n,0);
  F0R(i, n) cin>>a[i];
  vi p(n,0);
  F0R(i, n) cin>>p[i];
  int f=0;
  int c=1;
  F0R(i, n){
   if(i==n-1){break;}
   if(a[i]+p[i]>=a[i+1]){}
   else{
    c++;
   }
  }
  
  if(c<=2){f=1;}
  c=1;
  
  F0RR(i, n-1, 0){
   if(i==0){break;}
   if(a[i]-p[i]<=a[i-1]){}
   else{
    c++;
   }
  }
  
  if(c<=2){f=1;}
  
  int l=0;
  F0R(i, n){
   if(a[i]+p[i]>=a[i+1]){l=i+1;}
   else{break;}
  }
  int r=n-1;
  F0RR(i, n-1, 0){
   if(a[i]-p[i]<=a[i-1]){r=i-1;}
   else{break;}
  }
  if(l+1>=r){f=1;}
  if(f){cout<<YES<<ln;continue;}
  
  F0RL(i, 1, n-1){
   if(a[i]-p[i]<=a[i-1]){continue;}
   else{
    F0RL(j, i, n-1){
     if(j==n-1){f=1;}
     if(a[j]+p[j]>=a[j+1]){continue;}
     else{break;}
    }
     
    break;
   }
  }
  
  if(f){cout<<YES<<ln;}
  else{cout<<NO<<ln;}
 }

 return 0;
}
