#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int x, k;
        cin >> k >> x;
        int pos = lower_bound(a, a + n, x) - a;
        if(a[pos] == x){
            for(int i = pos - k/2; i < pos; i++){
                if(i >= 0){
                    cout << a[i] << " ";
                }else{
                    cout << 0 << " ";
                }
            }
            for(int i = pos + 1; i <= pos + k/2; i++){
                if(i < n){
                    cout << a[i] << " ";
                }else{
                    cout << 0 << " ";
                }
            }
        }
        cout << endl;

    }
    return 0;
}