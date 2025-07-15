#include <bits/stdc++.h> 
using namespace std;
#define ll long long 
int main() 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    cin>>t;
        while(t--)
        {
                    ll r,ans=0,k,n;
                	cin>>n>>k;
                	vector<int> pos,neg;
                	for(int i=0;i<n;i++)
                	{
                	    int x;
                		cin>>x;
                		if(x>0)
                		{
                			pos.push_back(x);
                		}
                		else if(x<0)
                		{
                			neg.push_back(-x);
                		}
                	}
                	
                	sort(pos.begin(),pos.end());
                	sort(neg.begin(),neg.end());
                	
                	for( int i=pos.size()-1;i>=0;i-=k)
                	{
                		ans+=2*pos[i];
                	}
                	for( int i=neg.size()-1;i>=0;i-=k)
                	{
                		
                		ans+=2*neg[i];
                	}
                	
                	ans-=max( (pos.empty()?0:pos.back()),(neg.empty()?0:neg.back()));
                	
                	cout<<ans<<endl;
                 
                 
              

        }
    return 0; 
}  
 
 