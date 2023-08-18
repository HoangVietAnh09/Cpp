#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		vector<int> v;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			v.push_back(x);
		}
		int tmp = -1;
		for(int i = 0; i < n; i++){
			if(v[i] == m){
				tmp = i;
				break;
			}
		}
		if(tmp == -1)
			cout << tmp << endl;
		else
			cout << tmp+1 << endl;
	}
	
	return 0;
}
