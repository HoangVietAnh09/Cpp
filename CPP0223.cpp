#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int b[n][m];
        int a[n*m];
        int count = 0;
        for(int i = 0; i < n; i++){
            for(int j =0; j < m; j++){
                cin >> b[i][j];
            }
        }
        int cnt = 0;
        int h1 = 0, h2 = n - 1, c1 = 0, c2 = m - 1;
        while(h1 <= h2 && c1 <= c2){
            for(int i = c1; i <= c2; i++){
                a[cnt++] = b[h1][i];
            }
            h1++;
            for(int i = h1; i <= h2; i++){
                a[cnt++] = b[i][c2];
            }
            c2--;
            if(c1 <= c2){
                for(int i = c2; i >= c1; i--){
                    a[cnt++] = b[h2][i];
                }
                h2--;
            }
            if(h1 <= h2){
                for(int i = h2; i >= h1; i--){
                    a[cnt++] = b[i][c1];
                }
                c1++;
            }
            
        }
        for(int i = 0; i < n*m; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}