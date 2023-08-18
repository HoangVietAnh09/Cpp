#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int x = 0;
        for(int i = 0; i < m; i++){
            int tmp = n;
            tmp *= i;
            if(tmp%m == 1){
                cout << i << endl;
                x = 1;
                break;
            }
        }
        if(x == 0){
            cout << "-1" << endl;
        }
    }
    return 0;
}