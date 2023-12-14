#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int max = INT_MIN;
        bool check = false;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            for(int j = n - 1; j >= i; j--){
                if(j-i <= max) break;
                if(a[i] < a[j]){
                    max = fmax(max, j-i);
                }
            }
        }
        cout << max << endl;
    }
    return 0;
}