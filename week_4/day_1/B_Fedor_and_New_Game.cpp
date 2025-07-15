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
   int n,m,k;
   cin>>n>>m>>k;

  pair<int,vector<int>> arr[m+1];

   for(int i=0;i<m+1;i++)
   {
   	cin>>arr[i].first;
   }

   // for(int i=0;i<m+1;i++)
   // {
   // 	cout<<arr[i].first<<" ";
   // }
  
  for(int i=0;i<m+1;i++)
  {
  	int num=arr[i].first;

  	for(int j=0;j<n;j++)
  	{
  		if((num>>j)&1){
  			arr[i].second.push_back(1);
  		}
  		  else{
  		arr[i].second.push_back(0);
  	}
  	}
  }

  // for(int i=0;i<m+1;i++)
  // {
  // 	cout<<arr[i].first<<" ";
  // 	for(auto c:arr[i].second)
  // 	{
  // 		cout<<c;
  // 	}
  // 	cout<<ln;
  // }

  vector<int>fedor(n);

  for(int i=0;i<n;i++)
  {
  	fedor[i]=arr[m].second[i];	
  }
  int cnt=0;
  for(int i=0;i<m;i++)
  {
  	int dif=0;
  	for(int j=0;j<n;j++)
  	{
  		if(fedor[j]!=arr[i].second[j])
  		{
  			dif++;
  		}
  	}

  	if(dif<=k)
  	{
  		cnt++;
  	}

  }

    cout<<cnt<<ln;
}

    

int main()
 {
   ios::sync_with_stdio(0); 
    cin.tie(NULL); 
    
        solve();
    
    return 0;
}
