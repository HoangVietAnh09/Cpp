#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    set<int> s;
    for(int i = 1; i <= n; i++){
    	int x;
    	cin >> x;
    	s.insert(x);
	}
	for(auto x : s){
		cout << x << " ";
	}
    return 0;
}
