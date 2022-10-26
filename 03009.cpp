#include<bits/stdc++.h>
using namespace std;
int n, check[1005], kq[1005];
struct data{
	int j, d, p;
};
data a[1005];
bool cmp(data a, data b){
	return a.p > b.p;
}
void solve(){
	cin >> n;
	memset(check, 0, sizeof(check));
	for(int i = 0; i < n; i++) cin >> a[i].j>> a[i].d>> a[i].p;
	sort(a, a+n, cmp);
	for(int i = 0; i < n; i++){
		for(int j = min(n, a[i].d)-1; j >= 0; j--){
			if(!check[j]){
				check[j] = 1;
				kq[j] = i;
				break;
			}
		}
	}
	int ans = 0, cnt = 0;
	for(int i = 0; i < n; i++){
		if(check[i]){
			cnt++;
			ans += a[kq[i]].p;
		}
	}
	cout << cnt << " " << ans << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
