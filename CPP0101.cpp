#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0), cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll sum = n*(n+1)/2;
		cout << sum << endl;
	}
	return 0;
}
