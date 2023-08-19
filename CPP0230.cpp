#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int dem = 0;
    int a[n][3];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        int tmp = 0;
        for(int j = 0; j < 3; j++){
            if(a[i][j] == 1){
                tmp++;
            }else if(a[i][j] == 0){
                tmp--;
            }
        }
        if(tmp > 0) dem++;
    }
    cout << dem << endl;
    return 0;
}