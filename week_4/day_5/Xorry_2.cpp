#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int t;cin>>t;while(t--){
      int n;cin>>n;
      int k=log2(n);
      int z=pow(2,k);
      int ans=0;
      int w=0;
      if(z==n){
          cout<<1<<endl;
      }
      else{
         while(n){
             if(n%2==0){w++;}
             else{
                 if(n!=1){
                ans+=w; }
                w=0;
             }
             n>>=1;
         }
         long long int a=pow(2,ans);
         cout<<a<<endl;
      }
  }

}