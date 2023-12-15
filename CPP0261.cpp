#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    } 
    cin >> m;
    int b[m][m];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < m; j++){
            cin >> b[i][j];
        }
    }
    for(int k = 0; k < n; k += m){
    	for(int i = 0; i < m; i++){
    		for(int j = 0; j < n; j++){
    			int q = j%m;
    			cout << a[i+k][j]* b[i][q] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
