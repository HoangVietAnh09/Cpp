#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b){
	if(a < b) return true;
	return false;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k, s = 0, b = 0;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] <= k){
				s++;
			}
		}
		for(int i = 0; i < s; i++){
			if(a[i] > k)
				b++;
		}
		int ss = b;
		for(int i = 0, j = s; j < n; i++, j++){
			if(a[i] > k){
				b--;
			}
			if(a[j] > k)
				b++;
			ss = min(ss, b);
		}
		cout << ss << endl;
	}
	return 0;
}
