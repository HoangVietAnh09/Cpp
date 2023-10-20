#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], b[n];
        for(int &x : a) cin >> x;
        int cnt = 0;
        sort(a, a + n);
        for(int i = 0; i < n; i++){
            if(i%2 == 0)
                b[i] = a[cnt++];
        }
        for(int i = 0; i < n; i++){
            if(i%2 != 0)
                b[i] = a[cnt++];
        }
        for(int i = 0; i < n; i++)
            cout << b[i] << " ";
        cout << endl;
    }
    return 0;
}