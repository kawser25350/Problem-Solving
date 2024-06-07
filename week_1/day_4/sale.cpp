#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        
        ll mx=INT_MIN;
        ll idx=-1;
        
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            
            if(mx<v[i])
            {
                mx=v[i];
                idx=i;
            }

        }
         ll sum=0;
        //cout<<mx<<'\n';
        
        for(int i=0;i<n;i++)
        {
            if(i == idx)
            {
                break;
            }
            else{
                sum+=v[i];
            }
        }
        
        sum+=(2*mx);
        cout<<sum<<'\n';
       
    }
    
}