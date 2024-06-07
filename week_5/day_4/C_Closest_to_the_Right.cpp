#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }


   while(k--)
   {
    int key;cin>>key;
    int idx=n,l=0,r=n-1,mid;

    while(l<=r)
    {
        mid=(l+r)/2;
        if(key<=a[mid])
        {
           idx=mid;
           r=mid-1;

        }
        else{
            l=mid+1;
        }
    }
    cout<<idx+1<<'\n';
   }
    return 0;
}
