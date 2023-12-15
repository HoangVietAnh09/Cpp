#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, m;
char a[1004][1004], b[1004][1004];
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

void dfs(int i, int j){
	a[i][j] = '-';
	for(int k = 0; k < 4; k++){
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < n && a[i1][j1] == 'O'){
			dfs(i1, j1);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		cin.ignore();
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}
		for(int i = 0; i < n; i++){
			if(a[i][0] == 'O') dfs(i, 0);
			if(a[i][m-1] == 'O') dfs(i, m-1);
		}
		for(int i = 0; i < m; i++){
			if(a[0][i] == 'O') dfs(0, i);
			if(a[n-1][i] == 'O') dfs(n-1, i);
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(a[i][j] != '-'){
					cout << "X ";
				}else cout << "O ";
			}
			cout << endl;
		}
		
		

	}	
	return 0;
}
