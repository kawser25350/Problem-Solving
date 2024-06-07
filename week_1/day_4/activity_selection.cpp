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


void solve(int start[],int finish[],int n)
{
    int i=0;
    int cnt=1;
    cout<<"selected-"<<i+1<<" ";
    for(int j=1;j<n;j++)
    {
        if(finish[i] <= start[j])
        {
        cout<<"selected-"<<j+1<<" ";
        cnt++;
        i=j;
        }
    }

    cout<<'\n';
    cout<<"total activity -"<<cnt<<endl;
}

int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(NULL); 
    int n;
    cin>>n;
    int start[n];
    int finish[n];
   FOR(i,n)
   {
    cin>>start[i]>>finish[i];
   }
 
 for(int i=0;i<n-1;i++)
 {
    int idx=i;

    for(int j=i+1;j<n;j++)
    {
        if(finish[idx] >= finish[j])
        {
            idx=j;
        }
    }
    if(idx!=i)
    {
        swap(finish[i],finish[idx]);
        swap(start[i],start[idx]);
    }
 }

FOR(i,n)
{

   cout<<start[i]<<" "<<finish[i]<<'\n';
}

solve(start,finish,n);

} 