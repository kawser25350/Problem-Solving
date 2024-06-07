
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
   
    int t;
    cin>>t;
    while(t--){
        int n,k,l;
        cin>>n>>k>>l;
        vector <pair<int,int>>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i].first>>a[i].second;
        }
         sort(a.rbegin(), a.rend());
         int sum=0;
         
         for(int i=0;i<n;i++){
             if(a[i].second==l && k>0){
                 sum+=a[i].first; k--;
             }
         }
         
         if(sum==0 || k!=0){
             cout<< -1<<endl;
         }
         else{
             cout<< sum<< endl;
         }
    }
    return 0;
}