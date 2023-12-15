#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, m;
char a[1004][1004];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

bool visited[104][104];
void dfs(int i, int j){
    
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(a[i][j] == 'X') continue;;
				bool check = false;
				int cnt = 0;
				for(int k = 0; k < 4; k++){
					int i1 = i + dx[k];
					int j1 = j + dy[k];
					if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m){
						if(a[i1][j1] == 'X'){
							cnt++;
						}
					}else{
						check = true;
					}
				}
				if(cnt != 0 && !check) a[i][j] = 'X';
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}
