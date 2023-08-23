#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
   int n;
    cin >> n;
    int b[n][n];
    int a[n*n];
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j =0; j < n; j++){
            cin >> b[i][j];
            a[count++] = b[i][j];
        }
    }
    sort(a, a+n*n);
    int cnt = 0;
    int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
    int k[n][n];
    while(h1 <= h2 && c1 <= c2){
        for(int i = c1; i <= c2; i++){
            k[h1][i] = a[cnt++];
        }
        h1++;
        for(int i = h1; i <= h2; i++){
            k[i][c2] = a[cnt++];
        }
        c2--;
        if(c1 <= c2){
            for(int i = c2; i >= c1; i--){
                k[h2][i] = a[cnt++];
            }
            h2--;
        }
        if(h1 <= h2){
            for(int i = h2; i >= h1; i--){
                k[i][c1] = a[cnt++];
            }
            c1++;
        }
        
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << k[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}