
#include<bits/stdc++.h>
using namespace std;
 
 
void solve(){
	int n;
	cin >> n;
	int xr = 0;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		xr ^= x;
	}
	if(xr == 0 || (n & 1)){
		cout << xr << '\n';
	}else{
		cout << -1 << '\n';
	}
}
 
int32_t main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
}